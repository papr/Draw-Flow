//
//  DFDetailViewController.h
//  Draw Flow
//
//  Created by papr on 04.04.12.
//  Copyright (c) 2012 Softwarehaus Kassel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DFDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
