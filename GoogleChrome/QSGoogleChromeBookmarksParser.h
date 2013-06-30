//
//  QSGoogleChromeBookmarksParser.h
//  GoogleChrome
//
//  Created by Andreas Johansson on 2012-04-25.
//  Copyright (c) 2012 stdin.se. All rights reserved.
//

#import "JSONKit.h"
#import "QSGoogleChromeDefinitions.h"

@interface QSGoogleChromeBookmarksParser : QSParser

- (NSArray *)loadBookmarksFrom:(NSString *)path deep:(BOOL)deep withBundle:(NSString *)bundle;
- (QSObject *)createFolderObject:(NSDictionary *)bookmark withBundle:(NSString *)bundle;
- (NSArray *)createObjectsForChildren:(NSDictionary *)bookmarkFolder deep:(BOOL)deep withBundle:(NSString *)bundle;

@end
