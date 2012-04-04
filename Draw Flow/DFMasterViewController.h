//
//  DFMasterViewController.h
//  Draw Flow
//
//  Created by papr on 04.04.12.
//  Copyright (c) 2012 Softwarehaus Kassel. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DFDetailViewController;

#import <CoreData/CoreData.h>

@interface DFMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DFDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
