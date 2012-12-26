//	Phonegap DatePicker Plugin
//	Copyright (c) Greg Allen 2011
//	MIT Licensed

#import <Foundation/Foundation.h>
/**
#ifdef CORDOVA_FRAMEWORK
#import <Cordova/CDVPlugin.h>
#else
#import "CDVPlugin.h"
#endif
**/

#import "WebViewJavascriptBridge.h"

#ifndef k_DATEPICKER_DATETIME_FORMAT
#define k_DATEPICKER_DATETIME_FORMAT @"yyyy-MM-dd'T'HH:mm:ss'Z'"
#endif

@interface DatePicker : /* CDVPlugin */ NSObject <UIActionSheetDelegate> {
	UIActionSheet *_datePickerSheet;
	UIDatePicker *_datePicker;
	NSDateFormatter *_isoDateFormatter;
	UIWebView *_webView;
	WebViewJavascriptBridge *_bridge;
	BOOL isVisible;

}

@property (nonatomic, retain) UIActionSheet* datePickerSheet;
@property (nonatomic, retain) UIDatePicker* datePicker;
@property (nonatomic, retain) NSDateFormatter* isoDateFormatter;
@property (nonatomic, retain) UIWebView* webView;
@property (nonatomic, retain) WebViewJavascriptBridge* jsBridge;


- (DatePicker *)initWithWebView:(UIWebView *)theWebView andBridge:(WebViewJavascriptBridge *)bridge;
//- (DatePicker *)initWithWebViewOnly:(UIWebView *)theWebView;

//- (void) prepare:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void) show:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

@end
