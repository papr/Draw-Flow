//
//  DFAppDelegate.h
//  Draw Flow
//
//  Created by papr on 04.04.12.
//  Copyright (c) 2012 Softwarehaus Kassel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DFAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (strong, nonatomic) UISplitViewController *splitViewController;

@end
