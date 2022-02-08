// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREINDEXOUTPUT_H
#define ORGAPACHELUCENESTOREINDEXOUTPUT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDataOutput.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneStoreIndexOutput : OrgApacheLuceneStoreDataOutput <JavaIoCloseable>

 {
    NSString *resourceDescription_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(void)dealloc;


@end


#endif