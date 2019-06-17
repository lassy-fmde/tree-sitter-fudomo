/*

<transformation> = <decomposition> |  <transformation> <decomposition>
<decomposition> = <typedFunction> “:“ <links>
<links> = “” | “\n \tab” <link>  {“,” <link>}
<link> = <localLink> | <forwardLink> | <reverseLink>
<localLink> = <untypedfunction>
<forwardLink> = <reference> “->” <typedfunction>
<reverseLink> =  <reference> “<-” <typedfunction>
<typedFunction> = <type> ”.” <untypedfunction>

*/

module.exports = grammar({
  name: 'fudomo',

  extras: $ => [ token(/\/\/.*\n/),
                 token(/#.*\n/),
                 /\s/ ],

  rules: {

    source_file: $ => repeat1($.decomposition),

    decomposition: $ => seq($.typedFunction, ':', optional($.links), '\n'),

    links: $ => seq(optional(/\n[ \t]*/), $.link, repeat(seq(',', $.link))),

    link: $ => choice($.localLink, $.forwardLink, $.reverseLink),

    localLink: $ => $.untypedFunction,

    forwardLink: $ => seq($.reference, '->', $.typedFunction),

    reverseLink: $ => seq($.reference, '<-', $.typedFunction),

    typedFunction: $ => seq($.type, '.', $.untypedFunction),

    type: $ =>  /[a-zA-Z][a-zA-Z0-9]*/,

    reference: $ => /[a-zA-Z][a-zA-Z0-9]*/,

    untypedFunction: $ => /[a-zA-Z][a-zA-Z0-9]*/
  },
});
