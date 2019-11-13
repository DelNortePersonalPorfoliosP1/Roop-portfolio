//
//  Rectangle.m
//  UIProject
//
//  Created by Vij, Jagroop on 11/13/19.
//  Copyright © 2019 Vij, Jagroop. All rights reserved.
//


#import "Rectangle.h"

@implementation Rectangle
@synthesize sideA,sideB,sideC,sideD;

- (void)viewDidLoad {
    [super viewDidLoad];
    [sideA setText:@"0.0"];
    [sideB setText:@"0.0"];
    [sideC setText:@"0.0"];
    [sideD setText:@"0.0"];
}

- (IBAction)calculate:(id)sender {
    double sideAcalc = (sideA.text.doubleValue + sideB.text.doubleValue)*2;
    [sideC setText:[NSString stringWithFormat:@"%lf", sideAcalc]];
    
    double sideBcalc = sideA.text.doubleValue * sideB.text.doubleValue;
    [sideC setText:[NSString stringWithFormat:@"%lf", sideBcalc]];
}
@end
