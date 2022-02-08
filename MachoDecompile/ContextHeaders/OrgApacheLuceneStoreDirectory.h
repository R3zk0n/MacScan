// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREDIRECTORY_H
#define ORGAPACHELUCENESTOREDIRECTORY_H


#import <Foundation/Foundation.h>

#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneStoreDirectory : NSObject <JavaIoCloseable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)openChecksumInputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(void)copyFromWithOrgApacheLuceneStoreDirectory:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withOrgApacheLuceneStoreIOContext:(id)arg3 ;
-(void)ensureOpen;
-(id)init;


@end


#endif