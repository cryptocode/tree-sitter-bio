# Tree-sitter grammar for Bio

A tree-sitter grammar for [Bio](https://github.com/cryptocode/bio), a programming language in the Lisp tradition.

Credits to @Wilfred for the elisp grammar which forms the basis for this one.

Supported syntax:

* Atoms and lists
* Types and macros
* Quoting and unquoting (`'`, `#'`, `` ` ``, `,`, `,@`)
* Special forms
* Comments

## Integrating with editors

See the documentation for nvim, helix, etc for up-to-date information on installing additional tree-sitter grammars.

Here's an example for Helix:

`~/.config/helix/languages.toml`

```
[[language]]
name = "bio"
scope = "source.bio"
injection-regex = "bio"
roots = []
file-types = ["bio"]
comment-tokens = ";"
indent = { tab-width = 4, unit = "  " }

[[grammar]]
name = "bio"
source = { git = "https://github.com/cryptocode/tree-sitter-bio", rev = "bea420e96026a2fdaed7136efd4a87d78a7245aa" }
```

You usually want to update `rev` to the latest commit, and `url` if you're forking this repository.

Then install the grammar:

```bash
hx --grammar fetch && hx --grammar build
```

For highlighting to work, you may have to symlink the queries:

```bash
ln -s ~/.config/helix/runtime/grammars/sources/bio/queries/ ~/.config/helix/runtime/queries/bio
```

## Developing

Clone this repository and run the following command to install dependencies:

```
$ npm install
```

To generate the parser after making changes to the grammar:

```
$ npm run generate
```

Add and push the changes to your fork.

To update Helix as in the example above, update language.toml with the correct url and rev, then run `hx --grammar fetch && hx --grammar build`
