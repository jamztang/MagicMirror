//
//  MMLicenseViewController.m
//  MagicMirror2
//
//  Created by James Tang on 29/12/2015.
//  Copyright © 2015 James Tang. All rights reserved.
//

#import "MMLicenseViewController.h"

@interface MMLicenseViewController ()

@property (weak) IBOutlet NSTextField *licenseTextField;
@property (weak) IBOutlet NSButton *purchaseButton;
@property (weak) IBOutlet NSButton *laterButton;
@property (weak) IBOutlet NSButton *enterButton;

@end


@implementation MMLicenseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do view setup here.
}

- (IBAction)purchaseButtonDidPress:(id)sender {
    [[NSWorkspace sharedWorkspace] openURL:[NSURL URLWithString:@"http://magicmirror.design/purchase"]];
}

- (IBAction)laterButtonDidPress:(id)sender {
    [self close];
}

- (IBAction)enterButtonDidPress:(id)sender {

}

@end