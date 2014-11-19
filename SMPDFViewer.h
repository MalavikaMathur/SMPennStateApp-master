//
//  SMPDFViewer.h
//  pennStateApp
//
//  Created by Malavika Mathuron 10/13/14.
//  Copyright (c) 2014 softwaremerchant. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SMPDFViewer : UIViewController
@property (weak, nonatomic) IBOutlet UIWebView *wvPDF;

@property (weak,nonatomic) NSURL *url;

@end
