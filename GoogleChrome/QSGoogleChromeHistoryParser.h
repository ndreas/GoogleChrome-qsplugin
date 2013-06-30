//
//  QSGoogleChromeHistoryParser.h
//  GoogleChrome
//
//  Created by Andreas Johansson on 2012-04-28.
//  Copyright (c) 2012 stdin.se. All rights reserved.
//

#import "QSGoogleChromeDefinitions.h"
#import "QSGoogleChromeDatabaseManager.h"

@interface QSGoogleChromeHistoryParser : QSParser

- (NSArray *)allHistoryEntriesFromDB:(NSString *)path withBundle:(NSString *)bundle;

@end
