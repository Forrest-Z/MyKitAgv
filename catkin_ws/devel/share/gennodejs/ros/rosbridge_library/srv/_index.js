
"use strict";

let TestMultipleResponseFields = require('./TestMultipleResponseFields.js')
let TestRequestAndResponse = require('./TestRequestAndResponse.js')
let TestMultipleRequestFields = require('./TestMultipleRequestFields.js')
let TestArrayRequest = require('./TestArrayRequest.js')
let SendBytes = require('./SendBytes.js')
let TestEmpty = require('./TestEmpty.js')
let TestResponseOnly = require('./TestResponseOnly.js')
let TestRequestOnly = require('./TestRequestOnly.js')
let AddTwoInts = require('./AddTwoInts.js')
let TestNestedService = require('./TestNestedService.js')

module.exports = {
  TestMultipleResponseFields: TestMultipleResponseFields,
  TestRequestAndResponse: TestRequestAndResponse,
  TestMultipleRequestFields: TestMultipleRequestFields,
  TestArrayRequest: TestArrayRequest,
  SendBytes: SendBytes,
  TestEmpty: TestEmpty,
  TestResponseOnly: TestResponseOnly,
  TestRequestOnly: TestRequestOnly,
  AddTwoInts: AddTwoInts,
  TestNestedService: TestNestedService,
};
