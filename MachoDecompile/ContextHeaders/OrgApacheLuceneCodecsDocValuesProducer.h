// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSDOCVALUESPRODUCER_H
#define ORGAPACHELUCENECODECSDOCVALUESPRODUCER_H


#import <Foundation/Foundation.h>

#import "JavaIoCloseable-Protocol.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneCodecsDocValuesProducer : NSObject <JavaIoCloseable, OrgApacheLuceneUtilAccountable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)getMergeInstance;


@end


#endif