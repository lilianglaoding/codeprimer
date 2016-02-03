(tool-bar-mode nil)
(menu-bar-mode nil)
(scroll-bar-mode nil)
(global-set-key [(meta ?/)] 'hippie-expand)
(setq hippie-expand-try-functions-list
'(try-expand-line
try-expand-line-all-buffers
try-expand-list
try-expand-list-all-buffers
try-expand-dabbrev
try-expand-dabbrev-visible
try-expand-dabbrev-all-buffers
try-expand-dabbrev-from-kill
try-complete-file-name
try-complete-file-name-partially
try-complete-lisp-symbol
try-complete-lisp-symbol-partially
try-expand-whole-kill))
(setq default-directory "~/codeprimer")
(setq c-default-style "linux" c-basic-offset 4)
(setq-default indent-tabs-mode nil)
(setq default-tab-width 8);;tab键为8个字符宽度
(setq tab-stop-list ())
(setq time-stamp-active t)
(setq time-stamp-warn-inactive t)
(setq time-stamp-format "%:u %02m/%02d/%04y %02H02M02S")
(add-hook 'write-file-hooks 'time-stamp)
(minibuffer-electric-default-mode 1)
;(partial-completion-mode 1)
(icomplete-mode 1)
(fset 'yes-or-no-p 'y-or-n-p)
(setq resize-mini-windows t)
(setq uniquify-buffer-name-style 'forward)
(setq Man-notify-method 'pushy)
(mouse-avoidance-mode 'animate)
(auto-compression-mode 1)
(column-number-mode t)
(setq default-fill-column 60)
(blink-cursor-mode -1)
(transient-mark-mode 1)
(show-paren-mode 1)
(mouse-wheel-mode t)
(setq visible-bell nil)
(setq scroll-step 1
scroll-margin 3
scroll-conservatively 10000)
(setq inhibit-startup-message t)
(setq gnus-inhibit-startup-message t)
(setq kill-ring-max 200)
(setq apropos-do-all t)
(setq x-select-enable-clipboard t)
;(add-to-list 'load-path  "~/.emacs.d/plugins/yasnippet")  
;(require 'yasnippet)  
;(yas/global-mode 1)
