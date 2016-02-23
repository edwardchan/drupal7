'use strict'

import React from 'react';
import ReactDOM from 'react-dom';
import Button from './components/Button';


function NotificationButton(options) {
  ReactDOM.render(
    <Button class={options.class} />, document.getElementById('button')
  );
}

window.NotificationButton = NotificationButton;
