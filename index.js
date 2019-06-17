var binary = require('node-pre-gyp');
var path = require('path');

try {
  //var binding_path = binary.find(path.resolve(path.join(__dirname,'./build/Release/tree_sitter_fudomo_binding')));
  var binding_path = binary.find(path.resolve(path.join(__dirname,'./build/Release/tree-sitter-fudomo')));
  module.exports = require(binding_path);
  // module.exports = require("./build/Release/tree_sitter_fudomo_binding");
} catch (error) {
  try {
    var binding_path = binary.find(path.resolve(path.join(__dirname,'./build/Debug/tree_sitter_fudomo_binding')));
    module.exports = require(binding_path);
    // module.exports = require("./build/Debug/tree_sitter_fudomo_binding");
  } catch (_) {
    throw error
  }
}
