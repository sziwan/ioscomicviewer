//
//  RBSComicPage.h
//  ComicReader
//
//  Created by Łukasz Adamczak on 5.06.2013.
//  Copyright (c) 2013 Rebased s.c. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MWPhotoProtocol.h>

@interface RBSComicPage : NSObject <MWPhoto>

@property (readonly) CGRect *paneRects;

+ (id)pageWithArchiveEntry:(ZZArchiveEntry *)entry;
+ (id)pageWithArchiveEntry:(ZZArchiveEntry *)entry metadata:(RXMLElement *)metadata;
- (id)initWithArchiveEntry:(ZZArchiveEntry *)entry;
- (id)initWithArchiveEntry:(ZZArchiveEntry *)entry metadata:(RXMLElement *)metadata;

- (CGRect)paneAtPoint:(CGPoint)point;

@end
