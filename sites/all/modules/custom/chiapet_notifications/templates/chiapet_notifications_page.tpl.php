<p>Welcome to the Admin Notifications page in the custom template!</p>

<?php
  $block = module_invoke('chiapet_notifications', 'block_view', 'notifications_block');
  print $block['content'];
?>
