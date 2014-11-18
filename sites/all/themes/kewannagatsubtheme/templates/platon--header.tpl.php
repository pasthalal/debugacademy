<header id="site-header"<?php print $site_header_attributes; ?>>
  <div class="row">
    <div class="col col-1-out-of-2 col-1-out-of-4 col-1-out-of-6">
      <?php if (!empty($logo)): ?>
        <a href="<?php print $front_page; ?>" id="logo"><img src="<?php print $logo; ?>" alt="Opigno"></a>
      <?php endif; ?>
    </div>

    <div class="col col-1-out-of-2 col-3-out-of-4 col-5-out-of-6">
      <?php if (!empty($page['header'])): ?>
        <div id="header">
           <?php print render($page['header']); ?>
          </div>
        <?php endif; ?>
      

        

        <?php if ($logged_in): ?>
          <a href="<?php print url('user/logout'); ?>" class="mobile-link-icon">
            <img src="<?php print $base_path . $directory; ?>/img/logout-icon.png">
          </a>
        <?php endif; ?>

      

      <div id="user-account-information">
        
          
        </div>

        <div id="user-account-information-name">
          

          <div id="user-account-information-links">
            <?php if ($logged_in): ?>
               <?php print l(t("logout"), 'user/logout'); ?>
            <?php else: ?>
              
              <?php print l(t("login"), 'user/login'); ?>
            <?php endif; ?>
          </div>
        </div>
      </div>
    </div>
  </div>
</header>
