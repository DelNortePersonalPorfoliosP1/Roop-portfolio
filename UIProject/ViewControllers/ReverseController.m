//
//  ReverseController.m
//  UIProject
//
//  Created by Vij, Jagroop on 12/2/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//

#import "ReverseController.h"

@implementation ReverseController
@synthesize Input;

- (IBAction)reverse:(id)sender {
    const char *cInput = [Input.text UTF8String];
    long inputLength = Input.text.length;
}

@end
