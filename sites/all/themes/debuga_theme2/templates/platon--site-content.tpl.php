<div id="site-content">
  <div class="row">
    
    <!-- only display collapsible sidebar if user is logged in -->
    <?php if (user_is_logged_in()): print $platon__site_content__first_sidebar; endif; ?>
    <?php print $platon__site_content__second_sidebar; ?>
    
  </div>
</div>
