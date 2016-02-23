'use strict'

import React from 'react';

export default class Button extends React.Component {
  constructor(props) {
    super(props);
    this.state = {liked: false};
  }
  handleClick(event) {
    this.setState({liked: !this.state.liked});
  }

  render() {
    var text = this.state.liked ? 'like' : 'haven\'t liked';
    return (
      <p onClick={this.handleClick.bind(this)}>
        You {text} this. Click to toggle.
      </p>
    );
  }
}

module.exports = Button;
