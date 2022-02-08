// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSFIELDSPRODUCER_H
#define ORGAPACHELUCENECODECSFIELDSPRODUCER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexFields.h"
#import "JavaIoCloseable-Protocol.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneCodecsFieldsProducer : OrgApacheLuceneIndexFields <JavaIoCloseable, OrgApacheLuceneUtilAccountable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)getMergeInstance;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif