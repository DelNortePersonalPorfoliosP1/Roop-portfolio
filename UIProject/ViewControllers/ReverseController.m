//
//  ReverseController.m
//  UIProject
//
//  Created by Vij, Jagroop on 12/2/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//

@implementation ReverseController
@synthesize input, box1, box2, box3;
- (void)viewDidLoad {
  [super viewDidLoad];
  [input setText:@"Input"];
}
- (IBAction)reverse:(id)sender {
const char *cInput = [input.text UTF8String];
long inputLength = input.text.length;
const char *cInput2 = cInput;
const char *cInput3 = cInput;
   
box1.text = [NSString stringWithFormat:@"%s", arrayreverse(cInput)];
box2.text = [NSString stringWithFormat:@"%s", recursion(cInput2)];
box3.text = [NSString stringWithFormat:@"%s", pointerreverse(cInput3)];
}
   
@end
