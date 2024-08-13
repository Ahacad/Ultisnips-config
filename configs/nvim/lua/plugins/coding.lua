return {
  -- use ctrl + a/d to incresa/decrease number
  {
    "triglav/vim-visual-increment",
  },
  -- generate toc for markdown
  {
    "mzlogin/vim-markdown-toc",
  },
  -- multiple cursor simultaneously
  {
    "terryma/vim-multiple-cursors",
  },
  {
    "pechorin/any-jump.vim",
  },
  -- edit surroundings quickly
  {
    "kylechui/nvim-surround",
  },
  -- function, class names lists, etc.
  {
    "liuchengxu/vista.vim",
  },
  -- session management
  {
    "tpope/vim-obsession",
  },
  -- github copilot
  {
    "github/copilot.vim",
    config = function()
      vim.g.copilot_no_tab_map = true
      vim.api.nvim_set_keymap("i", "<CR>", "", { noremap = true, silent = true })
      vim.api.nvim_set_keymap("i", "<C-J>", 'copilot#Accept("<CR>")', { noremap = true, silent = true, expr = true })
    end,
  },
  -- completion settings
  {
    "hrsh7th/nvim-cmp",
    dependencies = {
      "hrsh7th/cmp-emoji",
    },
    ---@param opts cmp.ConfigSchema
    opts = function(_, opts)
      local has_words_before = function()
        unpack = unpack or table.unpack
        local line, col = unpack(vim.api.nvim_win_get_cursor(0))
        return col ~= 0 and vim.api.nvim_buf_get_lines(0, line - 1, line, true)[1]:sub(col, col):match("%s") == nil
      end

      -- local luasnip = require("luasnip")
      local cmp = require("cmp")

      opts.mapping = vim.tbl_extend("force", opts.mapping, {
        ["<CR>"] = cmp.config.disable,
        ["<C-y>"] = cmp.mapping.confirm({ select = true }),
        ["<C-p>"] = cmp.mapping.select_prev_item(),
        ["<C-n>"] = cmp.mapping.select_next_item(),
        ["<C-e>"] = cmp.mapping.abort(),
      })
    end,
  },
}
