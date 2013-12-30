//
//  AppDelegate.h
//  code
//
//  Created by zhanghao on 13-12-28.
//  Copyright (c) 2013年 zhanghao. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;
@property (weak) IBOutlet NSTextField *BeforeTransfer;
@property (weak) IBOutlet NSTextField *AfterTransfer;
-(IBAction)Transfer:(id)sender;
@end
