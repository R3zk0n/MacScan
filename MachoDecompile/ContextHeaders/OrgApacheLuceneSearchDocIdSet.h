// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDOCIDSET_H
#define ORGAPACHELUCENESEARCHDOCIDSET_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneSearchDocIdSet : NSObject <OrgApacheLuceneUtilAccountable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)bits;
-(BOOL)isCacheable;
-(id)getChildResources;
-(id)init;
+(void)initialize;


@end


#endif