/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, VMUMachTaskContainer;

@interface VMUSymbolicator : NSObject
{
    NSMutableArray *_symbolOwners;
    NSArray *_symbolOwnerAddressRanges;
    NSString *_path;
    VMUMachTaskContainer *_machTaskContainer;
    BOOL _isProtected;
}

+ (id)symbolicatorsForPath:(id)arg1;
+ (id)symbolicatorForPath:(id)arg1 architecture:(id)arg2;
+ (id)symbolicatorForTask:(unsigned int)arg1;
+ (id)symbolicatorForPid:(int)arg1;
+ (id)symbolicatorForMachTaskContainer:(id)arg1;
+ (id)symbolicatorForSignature:(id)arg1;
- (id)faultLazySymbolOwnerAtIndex:(long long)arg1;
- (BOOL)addSymbolRichFile:(id)arg1;
- (void)replaceSymbolOwner:(id)arg1 withSymbolOwner:(id)arg2;
- (BOOL)containsAddress:(unsigned long long)arg1;
- (id)regions;
- (id)regionForAddress:(unsigned long long)arg1;
- (id)regionsInAddressRange:(struct _VMURange)arg1;
- (id)regionsForName:(id)arg1;
- (id)symbolForAddress:(unsigned long long)arg1;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (id)symbolOwnerForAddress:(unsigned long long)arg1;
- (id)symbolOwnersInAddressRange:(struct _VMURange)arg1;
- (id)symbolsForName:(id)arg1;
- (id)symbolsForMangledName:(id)arg1;
- (id)symbolOwnersForName:(id)arg1;
- (id)symbolOwnerForName:(id)arg1;
- (id)symbolOwnersWithFlags:(unsigned int)arg1;
- (id)symbolOwnerForPath:(id)arg1;
- (id)symbols;
- (id)sourceInfos;
- (id)symbolOwners;
- (id)symbolsInAddressRange:(struct _VMURange)arg1;
- (id)sourceInfosInAddressRange:(struct _VMURange)arg1;
- (id)path;
- (int)pid;
- (id)signature;
- (BOOL)isProtected;
- (void)forceFullSymbolExtraction;
- (id)architecture;
- (id)description;
- (void)dealloc;

@end

