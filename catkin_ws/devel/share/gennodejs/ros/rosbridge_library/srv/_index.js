
"use strict";

let TestRequestOnly = require('./TestRequestOnly.js')
let TestMultipleRequestFields = require('./TestMultipleRequestFields.js')
let AddTwoInts = require('./AddTwoInts.js')
let TestArrayRequest = require('./TestArrayRequest.js')
let TestMultipleResponseFields = require('./TestMultipleResponseFields.js')
let TestResponseOnly = require('./TestResponseOnly.js')
let TestEmpty = require('./TestEmpty.js')
let TestNestedService = require('./TestNestedService.js')
let TestRequestAndResponse = require('./TestRequestAndResponse.js')
let SendBytes = require('./SendBytes.js')

module.exports = {
  TestRequestOnly: TestRequestOnly,
  TestMultipleRequestFields: TestMultipleRequestFields,
  AddTwoInts: AddTwoInts,
  TestArrayRequest: TestArrayRequest,
  TestMultipleResponseFields: TestMultipleResponseFields,
  TestResponseOnly: TestResponseOnly,
  TestEmpty: TestEmpty,
  TestNestedService: TestNestedService,
  TestRequestAndResponse: TestRequestAndResponse,
  SendBytes: SendBytes,
};
