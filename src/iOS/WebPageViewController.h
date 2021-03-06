//
//  WebPageViewController.h
//  Go Map!!
//
//  Created by Bryce Cogswell on 12/26/12.
//  Copyright (c) 2012 Bryce Cogswell. All rights reserved.
//

#import <MessageUI/MessageUI.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface WebPageViewController : UIViewController <WKNavigationDelegate, UIActionSheetDelegate, MFMailComposeViewControllerDelegate>
{
	IBOutlet UIActivityIndicatorView	*	_activityIndicator;
	IBOutlet UIBarButtonItem			*	_actionButton;
}
@property (assign,nonatomic)	IBOutlet UIView		*	webViewContainer;
@property (strong,nonatomic)	WKWebView			*	webView;
@property (copy,nonatomic)		NSString			*	url;

- (IBAction)doAction:(id)sender;

// used by custom web view, not storyboard:
@property (assign,nonatomic)	IBOutlet	UINavigationBar	*	navBar;
- (IBAction)cancel:(id)sender;
@end
