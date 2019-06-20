const spawn = require('child_process');

if (!('SKIP_COMPILE_ON_INSTALL' in process.env)) {
  spawn.execSync('tree-sitter generate');
  spawn.execSync('node-pre-gyp install --fallback-to-build');
}
