//
//  AppDelegate.h
//  Test
//
//  Created by Liuxiaoyu on 2020/7/15.
//  Copyright © 2020 Wan Paul. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;

- (void)saveContext;


@end

