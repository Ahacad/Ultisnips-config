Vim�UnDo� �$\�pNtn��,�����H�c�*�^�!=�                                      `��    _�                      	        ����                                                                                                                                                                                                                                                                                                                                                             `��    �                   var vfile = require('to-vfile');   'var report = require('vfile-reporter');   !var unified = require('unified');   Kvar details = require('/home/ir1d/Documents/repo/remark-details/index.js');   'var markdown = require('remark-parse');   "var magic = require('./index.js');   -var remark2rehype = require('remark-rehype');   'var html = require('rehype-stringify');       	unified()       .use(markdown)       .use(details)       .use(remark2rehype)       .use(magic)       .use(html)   @    .process(vfile.readSync('example.md'), function(err, file) {   +        console.error(report(err || file));   "        console.log(String(file));       });       =// to-vfile vfile-reporter unified remark-parse remark-rehype   // rehype-stringify    �                 �                // rehype-stringify�                =// to-vfile vfile-reporter unified remark-parse remark-rehype�                 �                  });�                    console.log(String(file));�                '    console.error(report(err || file));�                ?  .process(vfile.readSync("example.md"), function (err, file) {�                  .use(html)�                  .use(magic)�                  .use(remark2rehype)�                  .use(details)�   
               .use(markdown)�   	             	unified()�      
           �      	          'var html = require("rehype-stringify");�                -var remark2rehype = require("remark-rehype");�                "var magic = require("./index.js");�                'var markdown = require("remark-parse");�                Kvar details = require("/home/ir1d/Documents/repo/remark-details/index.js");�                !var unified = require("unified");�                'var report = require("vfile-reporter");�                  var vfile = require("to-vfile");�                  var vfile = require('to-vfile')   &var report = require('vfile-reporter')    var unified = require('unified')   Jvar details = require('/home/ir1d/Documents/repo/remark-details/index.js')   &var markdown = require('remark-parse')   !var magic = require('./index.js')   ,var remark2rehype = require('remark-rehype')   &var html = require('rehype-stringify')       	unified()       .use(markdown)       .use(details)       .use(remark2rehype)       .use(magic)       .use(html)       .process(   %        vfile.readSync('example.md'),           function(err, file) {   .            console.error(report(err || file))   %            console.log(String(file))   
        })       A    // to-vfile vfile-reporter unified remark-parse remark-rehype       // rehype-stringify�               �                N// to-vfile vfile-reporter unified remark-parse remark-rehype rehype-stringify�                 �                  })�                    console.log(String(file))�                &    console.error(report(err || file))�                >  .process(vfile.readSync('example.md'), function(err, file) {�                  .use(html)�                  .use(magic)�                  .use(remark2rehype)�                  .use(details)�   
               .use(markdown)�   	             	unified()�      
           �      	          &var html = require('rehype-stringify')�                ,var remark2rehype = require('remark-rehype')�                !var magic = require('./index.js')�                &var markdown = require('remark-parse')�                Jvar details = require('/home/ir1d/Documents/repo/remark-details/index.js')�                 var unified = require('unified')�                &var report = require('vfile-reporter')�                 var vfile = require('to-vfile')5��