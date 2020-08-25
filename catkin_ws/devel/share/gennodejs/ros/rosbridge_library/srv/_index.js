
"use strict";

let TestEmpty = require('./TestEmpty.js')
let AddTwoInts = require('./AddTwoInts.js')
let TestRequestOnly = require('./TestRequestOnly.js')
let TestMultipleResponseFields = require('./TestMultipleResponseFields.js')
let TestNestedService = require('./TestNestedService.js')
let SendBytes = require('./SendBytes.js')
let TestRequestAndResponse = require('./TestRequestAndResponse.js')
let TestResponseOnly = require('./TestResponseOnly.js')
let TestArrayRequest = require('./TestArrayRequest.js')
let TestMultipleRequestFields = require('./TestMultipleRequestFields.js')

module.exports = {
  TestEmpty: TestEmpty,
  AddTwoInts: AddTwoInts,
  TestRequestOnly: TestRequestOnly,
  TestMultipleResponseFields: TestMultipleResponseFields,
  TestNestedService: TestNestedService,
  SendBytes: SendBytes,
  TestRequestAndResponse: TestRequestAndResponse,
  TestResponseOnly: TestResponseOnly,
  TestArrayRequest: TestArrayRequest,
  TestMultipleRequestFields: TestMultipleRequestFields,
};
