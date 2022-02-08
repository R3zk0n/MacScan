// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSSTOREDFIELDSWRITER_H
#define ORGAPACHELUCENECODECSSTOREDFIELDSWRITER_H


#import <Foundation/Foundation.h>

#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneCodecsStoredFieldsWriter : NSObject <JavaIoCloseable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)finishDocument;
-(int)mergeWithOrgApacheLuceneIndexMergeState:(id)arg0 ;


@end


#endif