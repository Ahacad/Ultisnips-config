Vim�UnDo� ��0.�I�T�|�a� �y����)��3      <execSync('npx bumpp package.json packages/*/package.json', {      ,                       `��    _�                        	    ����                                                                                                                                                                                                                                                                                                                                                             `��     �                import { join } from 'path'5��                          8                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 V       `��     �             
   #for (const template of templates) {   -  const path = join(template, 'package.json')   %  const pkg = await fs.readJSON(path)   <  pkg.dependencies = objectMap(pkg.dependencies, (k, v) => {   C    if (k.startsWith('@slidev/') && !k.startsWith('@slidev/theme'))         return [k, `^${version}`]       return [k, v]     })   .  await fs.writeJSON(path, pkg, { spaces: 2 })   }5��           
               �      a              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                 V       `��     �                 5��                          �                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                 V       `��    �                await $`git push origin --tags`�                await $`git push`�                await $`git tag v${version}`�                3await $`git commit -m "chore: release v${version}"`�                await $`git add .`�                 �                5const { version } = await fs.readJSON('package.json')�                 �   
             ]�   	             #  'packages/create-theme/template',�      
          !  'packages/create-app/template',�      	          const templates = [�                 �                PexecSync('npx bumpp package.json packages/*/package.json', { stdio: 'inherit' })�                 �                import { $ } from 'zx'�                import fs from 'fs-extra'�                (import { execSync } from 'child_process'�                 7/* eslint-disable @typescript-eslint/no-var-requires */�                (import { objectMap } from '@antfu/utils'5��                          {       )               �                7       7           7       7       �               (       &   8       (       &       �                         _                     �                         y                     �                           �                       �               P       N   �       P       N       �                           �                       �                         �                     �               !          �       !              �    	           #       '   �       #       '       �    
                  )                )       �                          I                     �               5           O      5               �                          P                     �                      )   f             )       �               3           �      3               �                      H   �             H       �                      .   �             .       �                      K   	             K       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 V       `��    �               �                H            await $`git add .` await $`git commit -m "chore: release v${�                 �                )        await fs.readJSON('package.json')�                    const {version} =�                 �                    ];�   
             )        'packages/create-theme/template',�   	             '        'packages/create-app/template',�      
              [�      	          const templates =�                 �                NexecSync('npx bumpp package.json packages/*/package.json', {stdio: 'inherit'})�                 �                import {$} from 'zx'�                import fs from 'fs-extra'�                &import {execSync} from 'child_process'�                 7/* eslint-disable @typescript-eslint/no-var-requires */�                .                version}"` await $`git tag v${   K                version}` await $`git push` await $`git push origin --tags`�                   ]5��                         N                     �                          �      {               �                7       7           7       7       �               &       &   8       &       &       �                         _                     �                         y                     �                           �                       �               N       N   �       N       N       �                           �                       �                         �                     �                      #   �              #       �    	           '       %         '       %       �    
           )          =      )              �                          @                     �                          A                     �                      %   S             %       �               )           y      )               �                       D   z              D       �               H       *   �      H       *       �                          �              H       5�_�                       %    ����                                                                                                                                                                                                                                                                                                                                                 V       `��    �               �                D        await $`git add .` await $`git commit -m "chore: release v${�                 �                &    await fs.readJSON('package.json');�                const {version} =�                 �   
             ];�   	             %    'packages/create-theme/template',�      
          #    'packages/create-app/template',�      	          const templates = [�                 �                NexecSync('npx bumpp package.json packages/*/package.json', {stdio: 'inherit'})�                 �                import {$} from 'zx'�                import fs from 'fs-extra'�                &import {execSync} from 'child_process'�                 7/* eslint-disable @typescript-eslint/no-var-requires */�                *            version}"` await $`git tag v${   G            version}` await $`git push` await $`git push origin --tags`�               %    await fs.readJSON('package.json')5��       %                  x                     �                          �      s               �                7       7           7       7       �               &       &   8       &       &       �                         _                     �                         y                     �                           �                       �               N       N   �       N       N       �                           �                       �                         �                     �               #       #   �       #       #       �    	           %       %         %       %       �    
                     =                    �                           @                      �                      4   A             4       �               &           v      &               �                       <   w              <       �               D       "   �      D       "       �                          �              @       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                 V       `��     �               <await $`git add .` await $`git commit -m "chore: release v${5��                         �                     5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                 V       `��    �                ?    version}` await $`git push` await $`git push origin --tags`�                #    version}"`; await $`git tag v${�                =await $`git add .`; await $`git commit -m "chore: release v${�                 �                4const {version} = await fs.readJSON('package.json');�                 �   
             ];�   	             %    'packages/create-theme/template',�      
          #    'packages/create-app/template',�      	          const templates = [�                 �                NexecSync('npx bumpp package.json packages/*/package.json', {stdio: 'inherit'})�                 �                import {$} from 'zx'�                import fs from 'fs-extra'�                &import {execSync} from 'child_process'�                 7/* eslint-disable @typescript-eslint/no-var-requires */�               "    version}"` await $`git tag v${5��                         �                     �                7       7           7       7       �               &       &   8       &       &       �                         _                     �                         y                     �                           �                       �               N       N   �       N       N       �                           �                       �                         �                     �               #       #   �       #       #       �    	           %       %         %       %       �    
                     =                    �                           @                      �               4       4   A      4       4       �                           v                      �               =          w      =              �               #       4   �      #       4       �               ?       N   �      ?       N       5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                 V       `��     �                 Nawait $`git tag v${version}` await $`git push` await $`git push origin --tags`5��                         �                     5�_�   	              
      0    ����                                                                                                                                                                                                                                                                                                                                                 V       `��     �               �                Pawait $`git tag v${version}` ;await $`git push` ;await $`git push origin --tags`�                4await $`git commit -m "chore: release v${version}"`;�                await $`git add .`;�                 �                4const {version} = await fs.readJSON('package.json');�                 �   
             ];�   	             %    'packages/create-theme/template',�      
          #    'packages/create-app/template',�      	          const templates = [�                 �                NexecSync('npx bumpp package.json packages/*/package.json', {stdio: 'inherit'})�                 �                import {$} from 'zx'�                import fs from 'fs-extra'�                &import {execSync} from 'child_process'�                 7/* eslint-disable @typescript-eslint/no-var-requires */�                 Oawait $`git tag v${version}` ;await $`git push` await $`git push origin --tags`5��       0                  �                     �                7       7           7       7       �               &       &   8       &       &       �                         _                     �                         y                     �                           �                       �               N       N   �       N       N       �                           �                       �                         �                     �               #       #   �       #       #       �    	           %       %         %       %       �    
                     =                    �                           @                      �               4       4   A      4       4       �                           v                      �                         w                    �               4       4   �      4       4       �               P          �      P              �                          �              3       5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                 V       `��    �                 &import {execSync} from 'child_process'   import fs from 'fs-extra'   import {$} from 'zx'       NexecSync('npx bumpp package.json packages/*/package.json', {stdio: 'inherit'})       const templates = [   #    'packages/create-app/template',   %    'packages/create-theme/template',   ];       4const {version} = await fs.readJSON('package.json');       await $`git add .`;   4await $`git commit -m "chore: release v${version}"`;   await $`git tag v${version}`;   await $`git push`;   await $`git push origin --tags`5��                         8       �      �      5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                      
          V       `��     �   	   
          const templates = [   !  'packages/create-app/template',   #  'packages/create-theme/template',   ];5��    	                      �       ]               5�_�                    
        ����                                                                                                                                                                                                                                                                                                                            
          
          V       `��    �            	   'import {execSync} from 'child_process';   import fs from 'fs-extra';   import {$} from 'zx';       <execSync('npx bumpp package.json packages/*/package.json', {       stdio: 'inherit',   });       4const {version} = await fs.readJSON('package.json');�                 await $`git push origin --tags`;�                await $`git push`;�                await $`git tag v${version}`;�                4await $`git commit -m "chore: release v${version}"`;�                await $`git add .`;�   
              �   	             6const { version } = await fs.readJSON('package.json');�      
           �      	          });�                  stdio: 'inherit',�                <execSync('npx bumpp package.json packages/*/package.json', {�                 �                import { $ } from 'zx';�                import fs from 'fs-extra';�                )import { execSync } from 'child_process';�                 7/* eslint-disable @typescript-eslint/no-var-requires */�   	   
           5��    	                      �                      �                7       7           7       7       �               )       '   8       )       '       �                         `                     �                         {                     �                           �                       �               <       <   �       <       <       �                         �                     �                         �                     �                           �                       �    	           6       4   �       6       4       �    
                                             �                                              �               4       4   4      4       4       �                         i                    �                         �                    �                           �                      �           	       	       8       �       �       5�_�                       ,    ����                                                                                                                                                                                                                                                                                                                                                             `��     �               <execSync('npx bumpp package.json packages/*/package.json', {5��       ,                  �                      5�_�                        -    ����                                                                                                                                                                                                                                                                                                                                                             `��    �            	   'import {execSync} from 'child_process';   import fs from 'fs-extra';   import {$} from 'zx';       $execSync('npx bumpp package.json', {       stdio: 'inherit',   });       4const {version} = await fs.readJSON('package.json');�                 await $`git push origin --tags`;�                await $`git push`;�                await $`git tag v${version}`;�                4await $`git commit -m "chore: release v${version}"`;�                await $`git add .`;�   
              �   	             6const { version } = await fs.readJSON('package.json');�      
           �      	          });�                  stdio: 'inherit',�               5execSync('npx bumpp package.json packages/*/.json', {�                 �                import { $ } from 'zx';�                import fs from 'fs-extra';�                )import { execSync } from 'child_process';�                 7/* eslint-disable @typescript-eslint/no-var-requires */5��                          �                      �                7       7           7       7       �               )       '   8       )       '       �                         `                     �                         {                     �                           �                       �               $       $   �       $       $       �                         �                     �                         �                     �                           �                       �    	           6       4   �       6       4       �    
                                             �                                             �               4       4         4       4       �                         Q                    �                         o                    �                           �                      �           	       	       8       �       �       5��