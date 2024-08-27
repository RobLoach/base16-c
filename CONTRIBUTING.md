# Contributing

## Building

### Dependencies

- `>=0.9.3` [tinted-builder-rust]

### Usage for template editing

1. Install [tinted-builder-rust]
1. Syncronize the color schemes
    ```
    tinted-builder-rust sync
    ```
1. Clone [base16-h](https://github.com/robloach/base16-h)
    ```sh
    git clone https://github.com/RobLoach/base16-h.git
    ```
1. Run `tinted-builder-rust` on the directory
    ```sh
    tinted-builder-rust build base16-h
    ```

If you have more questions about [tinted-builder-rust], have a look at
the information on the GitHub page.

[tinted-builder-rust]: https://github.com/tinted-theming/tinted-builder-rust
[tinted-schemes]: https://github.com/tinted-theming/schemes
