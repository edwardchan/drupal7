'use strict'

import React from 'react';
import Button from './components/Button';

function NotificationButton(options) {
  React.render(
    <Button class={options.class} />, document.getElementById('button')
  );
}
