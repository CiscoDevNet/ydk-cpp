
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENHANCED_MEMPOOL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENHANCED_MEMPOOL_MIB {

CISCOENHANCEDMEMPOOLMIB::CISCOENHANCEDMEMPOOLMIB()
    :
    cempnotificationconfig(std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig>())
    , cempmempooltable(std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable>())
    , cempmembufferpooltable(std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable>())
    , cempmembuffercachepooltable(std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable>())
{
    cempnotificationconfig->parent = this;
    cempmempooltable->parent = this;
    cempmembufferpooltable->parent = this;
    cempmembuffercachepooltable->parent = this;

    yang_name = "CISCO-ENHANCED-MEMPOOL-MIB"; yang_parent_name = "CISCO-ENHANCED-MEMPOOL-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOENHANCEDMEMPOOLMIB::~CISCOENHANCEDMEMPOOLMIB()
{
}

bool CISCOENHANCEDMEMPOOLMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cempnotificationconfig !=  nullptr && cempnotificationconfig->has_data())
	|| (cempmempooltable !=  nullptr && cempmempooltable->has_data())
	|| (cempmembufferpooltable !=  nullptr && cempmembufferpooltable->has_data())
	|| (cempmembuffercachepooltable !=  nullptr && cempmembuffercachepooltable->has_data());
}

bool CISCOENHANCEDMEMPOOLMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cempnotificationconfig !=  nullptr && cempnotificationconfig->has_operation())
	|| (cempmempooltable !=  nullptr && cempmempooltable->has_operation())
	|| (cempmembufferpooltable !=  nullptr && cempmembufferpooltable->has_operation())
	|| (cempmembuffercachepooltable !=  nullptr && cempmembuffercachepooltable->has_operation());
}

std::string CISCOENHANCEDMEMPOOLMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENHANCEDMEMPOOLMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENHANCEDMEMPOOLMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cempNotificationConfig")
    {
        if(cempnotificationconfig == nullptr)
        {
            cempnotificationconfig = std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig>();
        }
        return cempnotificationconfig;
    }

    if(child_yang_name == "cempMemPoolTable")
    {
        if(cempmempooltable == nullptr)
        {
            cempmempooltable = std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable>();
        }
        return cempmempooltable;
    }

    if(child_yang_name == "cempMemBufferPoolTable")
    {
        if(cempmembufferpooltable == nullptr)
        {
            cempmembufferpooltable = std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable>();
        }
        return cempmembufferpooltable;
    }

    if(child_yang_name == "cempMemBufferCachePoolTable")
    {
        if(cempmembuffercachepooltable == nullptr)
        {
            cempmembuffercachepooltable = std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable>();
        }
        return cempmembuffercachepooltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENHANCEDMEMPOOLMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cempnotificationconfig != nullptr)
    {
        _children["cempNotificationConfig"] = cempnotificationconfig;
    }

    if(cempmempooltable != nullptr)
    {
        _children["cempMemPoolTable"] = cempmempooltable;
    }

    if(cempmembufferpooltable != nullptr)
    {
        _children["cempMemBufferPoolTable"] = cempmembufferpooltable;
    }

    if(cempmembuffercachepooltable != nullptr)
    {
        _children["cempMemBufferCachePoolTable"] = cempmembuffercachepooltable;
    }

    return _children;
}

void CISCOENHANCEDMEMPOOLMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENHANCEDMEMPOOLMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOENHANCEDMEMPOOLMIB::clone_ptr() const
{
    return std::make_shared<CISCOENHANCEDMEMPOOLMIB>();
}

std::string CISCOENHANCEDMEMPOOLMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOENHANCEDMEMPOOLMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOENHANCEDMEMPOOLMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOENHANCEDMEMPOOLMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOENHANCEDMEMPOOLMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cempNotificationConfig" || name == "cempMemPoolTable" || name == "cempMemBufferPoolTable" || name == "cempMemBufferCachePoolTable")
        return true;
    return false;
}

CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::CempNotificationConfig()
    :
    cempmembuffernotifyenabled{YType::boolean, "cempMemBufferNotifyEnabled"}
{

    yang_name = "cempNotificationConfig"; yang_parent_name = "CISCO-ENHANCED-MEMPOOL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::~CempNotificationConfig()
{
}

bool CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::has_data() const
{
    if (is_presence_container) return true;
    return cempmembuffernotifyenabled.is_set;
}

bool CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cempmembuffernotifyenabled.yfilter);
}

std::string CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempNotificationConfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cempmembuffernotifyenabled.is_set || is_set(cempmembuffernotifyenabled.yfilter)) leaf_name_data.push_back(cempmembuffernotifyenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cempMemBufferNotifyEnabled")
    {
        cempmembuffernotifyenabled = value;
        cempmembuffernotifyenabled.value_namespace = name_space;
        cempmembuffernotifyenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cempMemBufferNotifyEnabled")
    {
        cempmembuffernotifyenabled.yfilter = yfilter;
    }
}

bool CISCOENHANCEDMEMPOOLMIB::CempNotificationConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cempMemBufferNotifyEnabled")
        return true;
    return false;
}

CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolTable()
    :
    cempmempoolentry(this, {"entphysicalindex", "cempmempoolindex"})
{

    yang_name = "cempMemPoolTable"; yang_parent_name = "CISCO-ENHANCED-MEMPOOL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::~CempMemPoolTable()
{
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cempmempoolentry.len(); index++)
    {
        if(cempmempoolentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::has_operation() const
{
    for (std::size_t index=0; index<cempmempoolentry.len(); index++)
    {
        if(cempmempoolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemPoolTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cempMemPoolEntry")
    {
        auto ent_ = std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry>();
        ent_->parent = this;
        cempmempoolentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cempmempoolentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cempMemPoolEntry")
        return true;
    return false;
}

CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::CempMemPoolEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cempmempoolindex{YType::int32, "cempMemPoolIndex"},
    cempmempooltype{YType::enumeration, "cempMemPoolType"},
    cempmempoolname{YType::str, "cempMemPoolName"},
    cempmempoolplatformmemory{YType::str, "cempMemPoolPlatformMemory"},
    cempmempoolalternate{YType::int32, "cempMemPoolAlternate"},
    cempmempoolvalid{YType::boolean, "cempMemPoolValid"},
    cempmempoolused{YType::uint32, "cempMemPoolUsed"},
    cempmempoolfree{YType::uint32, "cempMemPoolFree"},
    cempmempoollargestfree{YType::uint32, "cempMemPoolLargestFree"},
    cempmempoollowestfree{YType::uint32, "cempMemPoolLowestFree"},
    cempmempoolusedlowwatermark{YType::uint32, "cempMemPoolUsedLowWaterMark"},
    cempmempoolallochit{YType::uint32, "cempMemPoolAllocHit"},
    cempmempoolallocmiss{YType::uint32, "cempMemPoolAllocMiss"},
    cempmempoolfreehit{YType::uint32, "cempMemPoolFreeHit"},
    cempmempoolfreemiss{YType::uint32, "cempMemPoolFreeMiss"},
    cempmempoolshared{YType::uint32, "cempMemPoolShared"},
    cempmempoolusedovrflw{YType::uint32, "cempMemPoolUsedOvrflw"},
    cempmempoolhcused{YType::uint64, "cempMemPoolHCUsed"},
    cempmempoolfreeovrflw{YType::uint32, "cempMemPoolFreeOvrflw"},
    cempmempoolhcfree{YType::uint64, "cempMemPoolHCFree"},
    cempmempoollargestfreeovrflw{YType::uint32, "cempMemPoolLargestFreeOvrflw"},
    cempmempoolhclargestfree{YType::uint64, "cempMemPoolHCLargestFree"},
    cempmempoollowestfreeovrflw{YType::uint32, "cempMemPoolLowestFreeOvrflw"},
    cempmempoolhclowestfree{YType::uint64, "cempMemPoolHCLowestFree"},
    cempmempoolusedlowwatermarkovrflw{YType::uint32, "cempMemPoolUsedLowWaterMarkOvrflw"},
    cempmempoolhcusedlowwatermark{YType::uint64, "cempMemPoolHCUsedLowWaterMark"},
    cempmempoolsharedovrflw{YType::uint32, "cempMemPoolSharedOvrflw"},
    cempmempoolhcshared{YType::uint64, "cempMemPoolHCShared"}
{

    yang_name = "cempMemPoolEntry"; yang_parent_name = "cempMemPoolTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::~CempMemPoolEntry()
{
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cempmempoolindex.is_set
	|| cempmempooltype.is_set
	|| cempmempoolname.is_set
	|| cempmempoolplatformmemory.is_set
	|| cempmempoolalternate.is_set
	|| cempmempoolvalid.is_set
	|| cempmempoolused.is_set
	|| cempmempoolfree.is_set
	|| cempmempoollargestfree.is_set
	|| cempmempoollowestfree.is_set
	|| cempmempoolusedlowwatermark.is_set
	|| cempmempoolallochit.is_set
	|| cempmempoolallocmiss.is_set
	|| cempmempoolfreehit.is_set
	|| cempmempoolfreemiss.is_set
	|| cempmempoolshared.is_set
	|| cempmempoolusedovrflw.is_set
	|| cempmempoolhcused.is_set
	|| cempmempoolfreeovrflw.is_set
	|| cempmempoolhcfree.is_set
	|| cempmempoollargestfreeovrflw.is_set
	|| cempmempoolhclargestfree.is_set
	|| cempmempoollowestfreeovrflw.is_set
	|| cempmempoolhclowestfree.is_set
	|| cempmempoolusedlowwatermarkovrflw.is_set
	|| cempmempoolhcusedlowwatermark.is_set
	|| cempmempoolsharedovrflw.is_set
	|| cempmempoolhcshared.is_set;
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cempmempoolindex.yfilter)
	|| ydk::is_set(cempmempooltype.yfilter)
	|| ydk::is_set(cempmempoolname.yfilter)
	|| ydk::is_set(cempmempoolplatformmemory.yfilter)
	|| ydk::is_set(cempmempoolalternate.yfilter)
	|| ydk::is_set(cempmempoolvalid.yfilter)
	|| ydk::is_set(cempmempoolused.yfilter)
	|| ydk::is_set(cempmempoolfree.yfilter)
	|| ydk::is_set(cempmempoollargestfree.yfilter)
	|| ydk::is_set(cempmempoollowestfree.yfilter)
	|| ydk::is_set(cempmempoolusedlowwatermark.yfilter)
	|| ydk::is_set(cempmempoolallochit.yfilter)
	|| ydk::is_set(cempmempoolallocmiss.yfilter)
	|| ydk::is_set(cempmempoolfreehit.yfilter)
	|| ydk::is_set(cempmempoolfreemiss.yfilter)
	|| ydk::is_set(cempmempoolshared.yfilter)
	|| ydk::is_set(cempmempoolusedovrflw.yfilter)
	|| ydk::is_set(cempmempoolhcused.yfilter)
	|| ydk::is_set(cempmempoolfreeovrflw.yfilter)
	|| ydk::is_set(cempmempoolhcfree.yfilter)
	|| ydk::is_set(cempmempoollargestfreeovrflw.yfilter)
	|| ydk::is_set(cempmempoolhclargestfree.yfilter)
	|| ydk::is_set(cempmempoollowestfreeovrflw.yfilter)
	|| ydk::is_set(cempmempoolhclowestfree.yfilter)
	|| ydk::is_set(cempmempoolusedlowwatermarkovrflw.yfilter)
	|| ydk::is_set(cempmempoolhcusedlowwatermark.yfilter)
	|| ydk::is_set(cempmempoolsharedovrflw.yfilter)
	|| ydk::is_set(cempmempoolhcshared.yfilter);
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/cempMemPoolTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemPoolEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cempmempoolindex, "cempMemPoolIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cempmempoolindex.is_set || is_set(cempmempoolindex.yfilter)) leaf_name_data.push_back(cempmempoolindex.get_name_leafdata());
    if (cempmempooltype.is_set || is_set(cempmempooltype.yfilter)) leaf_name_data.push_back(cempmempooltype.get_name_leafdata());
    if (cempmempoolname.is_set || is_set(cempmempoolname.yfilter)) leaf_name_data.push_back(cempmempoolname.get_name_leafdata());
    if (cempmempoolplatformmemory.is_set || is_set(cempmempoolplatformmemory.yfilter)) leaf_name_data.push_back(cempmempoolplatformmemory.get_name_leafdata());
    if (cempmempoolalternate.is_set || is_set(cempmempoolalternate.yfilter)) leaf_name_data.push_back(cempmempoolalternate.get_name_leafdata());
    if (cempmempoolvalid.is_set || is_set(cempmempoolvalid.yfilter)) leaf_name_data.push_back(cempmempoolvalid.get_name_leafdata());
    if (cempmempoolused.is_set || is_set(cempmempoolused.yfilter)) leaf_name_data.push_back(cempmempoolused.get_name_leafdata());
    if (cempmempoolfree.is_set || is_set(cempmempoolfree.yfilter)) leaf_name_data.push_back(cempmempoolfree.get_name_leafdata());
    if (cempmempoollargestfree.is_set || is_set(cempmempoollargestfree.yfilter)) leaf_name_data.push_back(cempmempoollargestfree.get_name_leafdata());
    if (cempmempoollowestfree.is_set || is_set(cempmempoollowestfree.yfilter)) leaf_name_data.push_back(cempmempoollowestfree.get_name_leafdata());
    if (cempmempoolusedlowwatermark.is_set || is_set(cempmempoolusedlowwatermark.yfilter)) leaf_name_data.push_back(cempmempoolusedlowwatermark.get_name_leafdata());
    if (cempmempoolallochit.is_set || is_set(cempmempoolallochit.yfilter)) leaf_name_data.push_back(cempmempoolallochit.get_name_leafdata());
    if (cempmempoolallocmiss.is_set || is_set(cempmempoolallocmiss.yfilter)) leaf_name_data.push_back(cempmempoolallocmiss.get_name_leafdata());
    if (cempmempoolfreehit.is_set || is_set(cempmempoolfreehit.yfilter)) leaf_name_data.push_back(cempmempoolfreehit.get_name_leafdata());
    if (cempmempoolfreemiss.is_set || is_set(cempmempoolfreemiss.yfilter)) leaf_name_data.push_back(cempmempoolfreemiss.get_name_leafdata());
    if (cempmempoolshared.is_set || is_set(cempmempoolshared.yfilter)) leaf_name_data.push_back(cempmempoolshared.get_name_leafdata());
    if (cempmempoolusedovrflw.is_set || is_set(cempmempoolusedovrflw.yfilter)) leaf_name_data.push_back(cempmempoolusedovrflw.get_name_leafdata());
    if (cempmempoolhcused.is_set || is_set(cempmempoolhcused.yfilter)) leaf_name_data.push_back(cempmempoolhcused.get_name_leafdata());
    if (cempmempoolfreeovrflw.is_set || is_set(cempmempoolfreeovrflw.yfilter)) leaf_name_data.push_back(cempmempoolfreeovrflw.get_name_leafdata());
    if (cempmempoolhcfree.is_set || is_set(cempmempoolhcfree.yfilter)) leaf_name_data.push_back(cempmempoolhcfree.get_name_leafdata());
    if (cempmempoollargestfreeovrflw.is_set || is_set(cempmempoollargestfreeovrflw.yfilter)) leaf_name_data.push_back(cempmempoollargestfreeovrflw.get_name_leafdata());
    if (cempmempoolhclargestfree.is_set || is_set(cempmempoolhclargestfree.yfilter)) leaf_name_data.push_back(cempmempoolhclargestfree.get_name_leafdata());
    if (cempmempoollowestfreeovrflw.is_set || is_set(cempmempoollowestfreeovrflw.yfilter)) leaf_name_data.push_back(cempmempoollowestfreeovrflw.get_name_leafdata());
    if (cempmempoolhclowestfree.is_set || is_set(cempmempoolhclowestfree.yfilter)) leaf_name_data.push_back(cempmempoolhclowestfree.get_name_leafdata());
    if (cempmempoolusedlowwatermarkovrflw.is_set || is_set(cempmempoolusedlowwatermarkovrflw.yfilter)) leaf_name_data.push_back(cempmempoolusedlowwatermarkovrflw.get_name_leafdata());
    if (cempmempoolhcusedlowwatermark.is_set || is_set(cempmempoolhcusedlowwatermark.yfilter)) leaf_name_data.push_back(cempmempoolhcusedlowwatermark.get_name_leafdata());
    if (cempmempoolsharedovrflw.is_set || is_set(cempmempoolsharedovrflw.yfilter)) leaf_name_data.push_back(cempmempoolsharedovrflw.get_name_leafdata());
    if (cempmempoolhcshared.is_set || is_set(cempmempoolhcshared.yfilter)) leaf_name_data.push_back(cempmempoolhcshared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolIndex")
    {
        cempmempoolindex = value;
        cempmempoolindex.value_namespace = name_space;
        cempmempoolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolType")
    {
        cempmempooltype = value;
        cempmempooltype.value_namespace = name_space;
        cempmempooltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolName")
    {
        cempmempoolname = value;
        cempmempoolname.value_namespace = name_space;
        cempmempoolname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolPlatformMemory")
    {
        cempmempoolplatformmemory = value;
        cempmempoolplatformmemory.value_namespace = name_space;
        cempmempoolplatformmemory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolAlternate")
    {
        cempmempoolalternate = value;
        cempmempoolalternate.value_namespace = name_space;
        cempmempoolalternate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolValid")
    {
        cempmempoolvalid = value;
        cempmempoolvalid.value_namespace = name_space;
        cempmempoolvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolUsed")
    {
        cempmempoolused = value;
        cempmempoolused.value_namespace = name_space;
        cempmempoolused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolFree")
    {
        cempmempoolfree = value;
        cempmempoolfree.value_namespace = name_space;
        cempmempoolfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolLargestFree")
    {
        cempmempoollargestfree = value;
        cempmempoollargestfree.value_namespace = name_space;
        cempmempoollargestfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolLowestFree")
    {
        cempmempoollowestfree = value;
        cempmempoollowestfree.value_namespace = name_space;
        cempmempoollowestfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolUsedLowWaterMark")
    {
        cempmempoolusedlowwatermark = value;
        cempmempoolusedlowwatermark.value_namespace = name_space;
        cempmempoolusedlowwatermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolAllocHit")
    {
        cempmempoolallochit = value;
        cempmempoolallochit.value_namespace = name_space;
        cempmempoolallochit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolAllocMiss")
    {
        cempmempoolallocmiss = value;
        cempmempoolallocmiss.value_namespace = name_space;
        cempmempoolallocmiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolFreeHit")
    {
        cempmempoolfreehit = value;
        cempmempoolfreehit.value_namespace = name_space;
        cempmempoolfreehit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolFreeMiss")
    {
        cempmempoolfreemiss = value;
        cempmempoolfreemiss.value_namespace = name_space;
        cempmempoolfreemiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolShared")
    {
        cempmempoolshared = value;
        cempmempoolshared.value_namespace = name_space;
        cempmempoolshared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolUsedOvrflw")
    {
        cempmempoolusedovrflw = value;
        cempmempoolusedovrflw.value_namespace = name_space;
        cempmempoolusedovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolHCUsed")
    {
        cempmempoolhcused = value;
        cempmempoolhcused.value_namespace = name_space;
        cempmempoolhcused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolFreeOvrflw")
    {
        cempmempoolfreeovrflw = value;
        cempmempoolfreeovrflw.value_namespace = name_space;
        cempmempoolfreeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolHCFree")
    {
        cempmempoolhcfree = value;
        cempmempoolhcfree.value_namespace = name_space;
        cempmempoolhcfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolLargestFreeOvrflw")
    {
        cempmempoollargestfreeovrflw = value;
        cempmempoollargestfreeovrflw.value_namespace = name_space;
        cempmempoollargestfreeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolHCLargestFree")
    {
        cempmempoolhclargestfree = value;
        cempmempoolhclargestfree.value_namespace = name_space;
        cempmempoolhclargestfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolLowestFreeOvrflw")
    {
        cempmempoollowestfreeovrflw = value;
        cempmempoollowestfreeovrflw.value_namespace = name_space;
        cempmempoollowestfreeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolHCLowestFree")
    {
        cempmempoolhclowestfree = value;
        cempmempoolhclowestfree.value_namespace = name_space;
        cempmempoolhclowestfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolUsedLowWaterMarkOvrflw")
    {
        cempmempoolusedlowwatermarkovrflw = value;
        cempmempoolusedlowwatermarkovrflw.value_namespace = name_space;
        cempmempoolusedlowwatermarkovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolHCUsedLowWaterMark")
    {
        cempmempoolhcusedlowwatermark = value;
        cempmempoolhcusedlowwatermark.value_namespace = name_space;
        cempmempoolhcusedlowwatermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolSharedOvrflw")
    {
        cempmempoolsharedovrflw = value;
        cempmempoolsharedovrflw.value_namespace = name_space;
        cempmempoolsharedovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolHCShared")
    {
        cempmempoolhcshared = value;
        cempmempoolhcshared.value_namespace = name_space;
        cempmempoolhcshared.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolIndex")
    {
        cempmempoolindex.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolType")
    {
        cempmempooltype.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolName")
    {
        cempmempoolname.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolPlatformMemory")
    {
        cempmempoolplatformmemory.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolAlternate")
    {
        cempmempoolalternate.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolValid")
    {
        cempmempoolvalid.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolUsed")
    {
        cempmempoolused.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolFree")
    {
        cempmempoolfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolLargestFree")
    {
        cempmempoollargestfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolLowestFree")
    {
        cempmempoollowestfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolUsedLowWaterMark")
    {
        cempmempoolusedlowwatermark.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolAllocHit")
    {
        cempmempoolallochit.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolAllocMiss")
    {
        cempmempoolallocmiss.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolFreeHit")
    {
        cempmempoolfreehit.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolFreeMiss")
    {
        cempmempoolfreemiss.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolShared")
    {
        cempmempoolshared.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolUsedOvrflw")
    {
        cempmempoolusedovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCUsed")
    {
        cempmempoolhcused.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolFreeOvrflw")
    {
        cempmempoolfreeovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCFree")
    {
        cempmempoolhcfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolLargestFreeOvrflw")
    {
        cempmempoollargestfreeovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCLargestFree")
    {
        cempmempoolhclargestfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolLowestFreeOvrflw")
    {
        cempmempoollowestfreeovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCLowestFree")
    {
        cempmempoolhclowestfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolUsedLowWaterMarkOvrflw")
    {
        cempmempoolusedlowwatermarkovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCUsedLowWaterMark")
    {
        cempmempoolhcusedlowwatermark.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolSharedOvrflw")
    {
        cempmempoolsharedovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCShared")
    {
        cempmempoolhcshared.yfilter = yfilter;
    }
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemPoolTable::CempMemPoolEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cempMemPoolIndex" || name == "cempMemPoolType" || name == "cempMemPoolName" || name == "cempMemPoolPlatformMemory" || name == "cempMemPoolAlternate" || name == "cempMemPoolValid" || name == "cempMemPoolUsed" || name == "cempMemPoolFree" || name == "cempMemPoolLargestFree" || name == "cempMemPoolLowestFree" || name == "cempMemPoolUsedLowWaterMark" || name == "cempMemPoolAllocHit" || name == "cempMemPoolAllocMiss" || name == "cempMemPoolFreeHit" || name == "cempMemPoolFreeMiss" || name == "cempMemPoolShared" || name == "cempMemPoolUsedOvrflw" || name == "cempMemPoolHCUsed" || name == "cempMemPoolFreeOvrflw" || name == "cempMemPoolHCFree" || name == "cempMemPoolLargestFreeOvrflw" || name == "cempMemPoolHCLargestFree" || name == "cempMemPoolLowestFreeOvrflw" || name == "cempMemPoolHCLowestFree" || name == "cempMemPoolUsedLowWaterMarkOvrflw" || name == "cempMemPoolHCUsedLowWaterMark" || name == "cempMemPoolSharedOvrflw" || name == "cempMemPoolHCShared")
        return true;
    return false;
}

CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolTable()
    :
    cempmembufferpoolentry(this, {"entphysicalindex", "cempmembufferpoolindex"})
{

    yang_name = "cempMemBufferPoolTable"; yang_parent_name = "CISCO-ENHANCED-MEMPOOL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::~CempMemBufferPoolTable()
{
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cempmembufferpoolentry.len(); index++)
    {
        if(cempmembufferpoolentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::has_operation() const
{
    for (std::size_t index=0; index<cempmembufferpoolentry.len(); index++)
    {
        if(cempmembufferpoolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemBufferPoolTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cempMemBufferPoolEntry")
    {
        auto ent_ = std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry>();
        ent_->parent = this;
        cempmembufferpoolentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cempmembufferpoolentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cempMemBufferPoolEntry")
        return true;
    return false;
}

CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::CempMemBufferPoolEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cempmembufferpoolindex{YType::uint32, "cempMemBufferPoolIndex"},
    cempmembuffermempoolindex{YType::int32, "cempMemBufferMemPoolIndex"},
    cempmembuffername{YType::str, "cempMemBufferName"},
    cempmembufferdynamic{YType::boolean, "cempMemBufferDynamic"},
    cempmembuffersize{YType::uint32, "cempMemBufferSize"},
    cempmembuffermin{YType::uint32, "cempMemBufferMin"},
    cempmembuffermax{YType::uint32, "cempMemBufferMax"},
    cempmembufferpermanent{YType::uint32, "cempMemBufferPermanent"},
    cempmembuffertransient{YType::uint32, "cempMemBufferTransient"},
    cempmembuffertotal{YType::uint32, "cempMemBufferTotal"},
    cempmembufferfree{YType::uint32, "cempMemBufferFree"},
    cempmembufferhit{YType::uint32, "cempMemBufferHit"},
    cempmembuffermiss{YType::uint32, "cempMemBufferMiss"},
    cempmembufferfreehit{YType::uint32, "cempMemBufferFreeHit"},
    cempmembufferfreemiss{YType::uint32, "cempMemBufferFreeMiss"},
    cempmembufferpermchange{YType::int32, "cempMemBufferPermChange"},
    cempmembufferpeak{YType::uint32, "cempMemBufferPeak"},
    cempmembufferpeaktime{YType::uint32, "cempMemBufferPeakTime"},
    cempmembuffertrim{YType::uint32, "cempMemBufferTrim"},
    cempmembuffergrow{YType::uint32, "cempMemBufferGrow"},
    cempmembufferfailures{YType::uint32, "cempMemBufferFailures"},
    cempmembuffernostorage{YType::uint32, "cempMemBufferNoStorage"}
{

    yang_name = "cempMemBufferPoolEntry"; yang_parent_name = "cempMemBufferPoolTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::~CempMemBufferPoolEntry()
{
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cempmembufferpoolindex.is_set
	|| cempmembuffermempoolindex.is_set
	|| cempmembuffername.is_set
	|| cempmembufferdynamic.is_set
	|| cempmembuffersize.is_set
	|| cempmembuffermin.is_set
	|| cempmembuffermax.is_set
	|| cempmembufferpermanent.is_set
	|| cempmembuffertransient.is_set
	|| cempmembuffertotal.is_set
	|| cempmembufferfree.is_set
	|| cempmembufferhit.is_set
	|| cempmembuffermiss.is_set
	|| cempmembufferfreehit.is_set
	|| cempmembufferfreemiss.is_set
	|| cempmembufferpermchange.is_set
	|| cempmembufferpeak.is_set
	|| cempmembufferpeaktime.is_set
	|| cempmembuffertrim.is_set
	|| cempmembuffergrow.is_set
	|| cempmembufferfailures.is_set
	|| cempmembuffernostorage.is_set;
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cempmembufferpoolindex.yfilter)
	|| ydk::is_set(cempmembuffermempoolindex.yfilter)
	|| ydk::is_set(cempmembuffername.yfilter)
	|| ydk::is_set(cempmembufferdynamic.yfilter)
	|| ydk::is_set(cempmembuffersize.yfilter)
	|| ydk::is_set(cempmembuffermin.yfilter)
	|| ydk::is_set(cempmembuffermax.yfilter)
	|| ydk::is_set(cempmembufferpermanent.yfilter)
	|| ydk::is_set(cempmembuffertransient.yfilter)
	|| ydk::is_set(cempmembuffertotal.yfilter)
	|| ydk::is_set(cempmembufferfree.yfilter)
	|| ydk::is_set(cempmembufferhit.yfilter)
	|| ydk::is_set(cempmembuffermiss.yfilter)
	|| ydk::is_set(cempmembufferfreehit.yfilter)
	|| ydk::is_set(cempmembufferfreemiss.yfilter)
	|| ydk::is_set(cempmembufferpermchange.yfilter)
	|| ydk::is_set(cempmembufferpeak.yfilter)
	|| ydk::is_set(cempmembufferpeaktime.yfilter)
	|| ydk::is_set(cempmembuffertrim.yfilter)
	|| ydk::is_set(cempmembuffergrow.yfilter)
	|| ydk::is_set(cempmembufferfailures.yfilter)
	|| ydk::is_set(cempmembuffernostorage.yfilter);
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/cempMemBufferPoolTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemBufferPoolEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cempmembufferpoolindex, "cempMemBufferPoolIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cempmembufferpoolindex.is_set || is_set(cempmembufferpoolindex.yfilter)) leaf_name_data.push_back(cempmembufferpoolindex.get_name_leafdata());
    if (cempmembuffermempoolindex.is_set || is_set(cempmembuffermempoolindex.yfilter)) leaf_name_data.push_back(cempmembuffermempoolindex.get_name_leafdata());
    if (cempmembuffername.is_set || is_set(cempmembuffername.yfilter)) leaf_name_data.push_back(cempmembuffername.get_name_leafdata());
    if (cempmembufferdynamic.is_set || is_set(cempmembufferdynamic.yfilter)) leaf_name_data.push_back(cempmembufferdynamic.get_name_leafdata());
    if (cempmembuffersize.is_set || is_set(cempmembuffersize.yfilter)) leaf_name_data.push_back(cempmembuffersize.get_name_leafdata());
    if (cempmembuffermin.is_set || is_set(cempmembuffermin.yfilter)) leaf_name_data.push_back(cempmembuffermin.get_name_leafdata());
    if (cempmembuffermax.is_set || is_set(cempmembuffermax.yfilter)) leaf_name_data.push_back(cempmembuffermax.get_name_leafdata());
    if (cempmembufferpermanent.is_set || is_set(cempmembufferpermanent.yfilter)) leaf_name_data.push_back(cempmembufferpermanent.get_name_leafdata());
    if (cempmembuffertransient.is_set || is_set(cempmembuffertransient.yfilter)) leaf_name_data.push_back(cempmembuffertransient.get_name_leafdata());
    if (cempmembuffertotal.is_set || is_set(cempmembuffertotal.yfilter)) leaf_name_data.push_back(cempmembuffertotal.get_name_leafdata());
    if (cempmembufferfree.is_set || is_set(cempmembufferfree.yfilter)) leaf_name_data.push_back(cempmembufferfree.get_name_leafdata());
    if (cempmembufferhit.is_set || is_set(cempmembufferhit.yfilter)) leaf_name_data.push_back(cempmembufferhit.get_name_leafdata());
    if (cempmembuffermiss.is_set || is_set(cempmembuffermiss.yfilter)) leaf_name_data.push_back(cempmembuffermiss.get_name_leafdata());
    if (cempmembufferfreehit.is_set || is_set(cempmembufferfreehit.yfilter)) leaf_name_data.push_back(cempmembufferfreehit.get_name_leafdata());
    if (cempmembufferfreemiss.is_set || is_set(cempmembufferfreemiss.yfilter)) leaf_name_data.push_back(cempmembufferfreemiss.get_name_leafdata());
    if (cempmembufferpermchange.is_set || is_set(cempmembufferpermchange.yfilter)) leaf_name_data.push_back(cempmembufferpermchange.get_name_leafdata());
    if (cempmembufferpeak.is_set || is_set(cempmembufferpeak.yfilter)) leaf_name_data.push_back(cempmembufferpeak.get_name_leafdata());
    if (cempmembufferpeaktime.is_set || is_set(cempmembufferpeaktime.yfilter)) leaf_name_data.push_back(cempmembufferpeaktime.get_name_leafdata());
    if (cempmembuffertrim.is_set || is_set(cempmembuffertrim.yfilter)) leaf_name_data.push_back(cempmembuffertrim.get_name_leafdata());
    if (cempmembuffergrow.is_set || is_set(cempmembuffergrow.yfilter)) leaf_name_data.push_back(cempmembuffergrow.get_name_leafdata());
    if (cempmembufferfailures.is_set || is_set(cempmembufferfailures.yfilter)) leaf_name_data.push_back(cempmembufferfailures.get_name_leafdata());
    if (cempmembuffernostorage.is_set || is_set(cempmembuffernostorage.yfilter)) leaf_name_data.push_back(cempmembuffernostorage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferPoolIndex")
    {
        cempmembufferpoolindex = value;
        cempmembufferpoolindex.value_namespace = name_space;
        cempmembufferpoolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferMemPoolIndex")
    {
        cempmembuffermempoolindex = value;
        cempmembuffermempoolindex.value_namespace = name_space;
        cempmembuffermempoolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferName")
    {
        cempmembuffername = value;
        cempmembuffername.value_namespace = name_space;
        cempmembuffername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferDynamic")
    {
        cempmembufferdynamic = value;
        cempmembufferdynamic.value_namespace = name_space;
        cempmembufferdynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferSize")
    {
        cempmembuffersize = value;
        cempmembuffersize.value_namespace = name_space;
        cempmembuffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferMin")
    {
        cempmembuffermin = value;
        cempmembuffermin.value_namespace = name_space;
        cempmembuffermin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferMax")
    {
        cempmembuffermax = value;
        cempmembuffermax.value_namespace = name_space;
        cempmembuffermax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferPermanent")
    {
        cempmembufferpermanent = value;
        cempmembufferpermanent.value_namespace = name_space;
        cempmembufferpermanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferTransient")
    {
        cempmembuffertransient = value;
        cempmembuffertransient.value_namespace = name_space;
        cempmembuffertransient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferTotal")
    {
        cempmembuffertotal = value;
        cempmembuffertotal.value_namespace = name_space;
        cempmembuffertotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferFree")
    {
        cempmembufferfree = value;
        cempmembufferfree.value_namespace = name_space;
        cempmembufferfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferHit")
    {
        cempmembufferhit = value;
        cempmembufferhit.value_namespace = name_space;
        cempmembufferhit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferMiss")
    {
        cempmembuffermiss = value;
        cempmembuffermiss.value_namespace = name_space;
        cempmembuffermiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferFreeHit")
    {
        cempmembufferfreehit = value;
        cempmembufferfreehit.value_namespace = name_space;
        cempmembufferfreehit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferFreeMiss")
    {
        cempmembufferfreemiss = value;
        cempmembufferfreemiss.value_namespace = name_space;
        cempmembufferfreemiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferPermChange")
    {
        cempmembufferpermchange = value;
        cempmembufferpermchange.value_namespace = name_space;
        cempmembufferpermchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferPeak")
    {
        cempmembufferpeak = value;
        cempmembufferpeak.value_namespace = name_space;
        cempmembufferpeak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferPeakTime")
    {
        cempmembufferpeaktime = value;
        cempmembufferpeaktime.value_namespace = name_space;
        cempmembufferpeaktime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferTrim")
    {
        cempmembuffertrim = value;
        cempmembuffertrim.value_namespace = name_space;
        cempmembuffertrim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferGrow")
    {
        cempmembuffergrow = value;
        cempmembuffergrow.value_namespace = name_space;
        cempmembuffergrow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferFailures")
    {
        cempmembufferfailures = value;
        cempmembufferfailures.value_namespace = name_space;
        cempmembufferfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferNoStorage")
    {
        cempmembuffernostorage = value;
        cempmembuffernostorage.value_namespace = name_space;
        cempmembuffernostorage.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPoolIndex")
    {
        cempmembufferpoolindex.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferMemPoolIndex")
    {
        cempmembuffermempoolindex.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferName")
    {
        cempmembuffername.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferDynamic")
    {
        cempmembufferdynamic.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferSize")
    {
        cempmembuffersize.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferMin")
    {
        cempmembuffermin.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferMax")
    {
        cempmembuffermax.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPermanent")
    {
        cempmembufferpermanent.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferTransient")
    {
        cempmembuffertransient.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferTotal")
    {
        cempmembuffertotal.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferFree")
    {
        cempmembufferfree.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferHit")
    {
        cempmembufferhit.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferMiss")
    {
        cempmembuffermiss.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferFreeHit")
    {
        cempmembufferfreehit.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferFreeMiss")
    {
        cempmembufferfreemiss.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPermChange")
    {
        cempmembufferpermchange.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPeak")
    {
        cempmembufferpeak.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPeakTime")
    {
        cempmembufferpeaktime.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferTrim")
    {
        cempmembuffertrim.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferGrow")
    {
        cempmembuffergrow.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferFailures")
    {
        cempmembufferfailures.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferNoStorage")
    {
        cempmembuffernostorage.yfilter = yfilter;
    }
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferPoolTable::CempMemBufferPoolEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cempMemBufferPoolIndex" || name == "cempMemBufferMemPoolIndex" || name == "cempMemBufferName" || name == "cempMemBufferDynamic" || name == "cempMemBufferSize" || name == "cempMemBufferMin" || name == "cempMemBufferMax" || name == "cempMemBufferPermanent" || name == "cempMemBufferTransient" || name == "cempMemBufferTotal" || name == "cempMemBufferFree" || name == "cempMemBufferHit" || name == "cempMemBufferMiss" || name == "cempMemBufferFreeHit" || name == "cempMemBufferFreeMiss" || name == "cempMemBufferPermChange" || name == "cempMemBufferPeak" || name == "cempMemBufferPeakTime" || name == "cempMemBufferTrim" || name == "cempMemBufferGrow" || name == "cempMemBufferFailures" || name == "cempMemBufferNoStorage")
        return true;
    return false;
}

CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolTable()
    :
    cempmembuffercachepoolentry(this, {"entphysicalindex", "cempmembufferpoolindex"})
{

    yang_name = "cempMemBufferCachePoolTable"; yang_parent_name = "CISCO-ENHANCED-MEMPOOL-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::~CempMemBufferCachePoolTable()
{
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cempmembuffercachepoolentry.len(); index++)
    {
        if(cempmembuffercachepoolentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::has_operation() const
{
    for (std::size_t index=0; index<cempmembuffercachepoolentry.len(); index++)
    {
        if(cempmembuffercachepoolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemBufferCachePoolTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cempMemBufferCachePoolEntry")
    {
        auto ent_ = std::make_shared<CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry>();
        ent_->parent = this;
        cempmembuffercachepoolentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cempmembuffercachepoolentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cempMemBufferCachePoolEntry")
        return true;
    return false;
}

CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::CempMemBufferCachePoolEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cempmembufferpoolindex{YType::str, "cempMemBufferPoolIndex"},
    cempmembuffercachesize{YType::uint32, "cempMemBufferCacheSize"},
    cempmembuffercachetotal{YType::uint32, "cempMemBufferCacheTotal"},
    cempmembuffercacheused{YType::uint32, "cempMemBufferCacheUsed"},
    cempmembuffercachehit{YType::uint32, "cempMemBufferCacheHit"},
    cempmembuffercachemiss{YType::uint32, "cempMemBufferCacheMiss"},
    cempmembuffercachethreshold{YType::uint32, "cempMemBufferCacheThreshold"},
    cempmembuffercachethresholdcount{YType::uint32, "cempMemBufferCacheThresholdCount"}
{

    yang_name = "cempMemBufferCachePoolEntry"; yang_parent_name = "cempMemBufferCachePoolTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::~CempMemBufferCachePoolEntry()
{
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cempmembufferpoolindex.is_set
	|| cempmembuffercachesize.is_set
	|| cempmembuffercachetotal.is_set
	|| cempmembuffercacheused.is_set
	|| cempmembuffercachehit.is_set
	|| cempmembuffercachemiss.is_set
	|| cempmembuffercachethreshold.is_set
	|| cempmembuffercachethresholdcount.is_set;
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cempmembufferpoolindex.yfilter)
	|| ydk::is_set(cempmembuffercachesize.yfilter)
	|| ydk::is_set(cempmembuffercachetotal.yfilter)
	|| ydk::is_set(cempmembuffercacheused.yfilter)
	|| ydk::is_set(cempmembuffercachehit.yfilter)
	|| ydk::is_set(cempmembuffercachemiss.yfilter)
	|| ydk::is_set(cempmembuffercachethreshold.yfilter)
	|| ydk::is_set(cempmembuffercachethresholdcount.yfilter);
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/cempMemBufferCachePoolTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemBufferCachePoolEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cempmembufferpoolindex, "cempMemBufferPoolIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cempmembufferpoolindex.is_set || is_set(cempmembufferpoolindex.yfilter)) leaf_name_data.push_back(cempmembufferpoolindex.get_name_leafdata());
    if (cempmembuffercachesize.is_set || is_set(cempmembuffercachesize.yfilter)) leaf_name_data.push_back(cempmembuffercachesize.get_name_leafdata());
    if (cempmembuffercachetotal.is_set || is_set(cempmembuffercachetotal.yfilter)) leaf_name_data.push_back(cempmembuffercachetotal.get_name_leafdata());
    if (cempmembuffercacheused.is_set || is_set(cempmembuffercacheused.yfilter)) leaf_name_data.push_back(cempmembuffercacheused.get_name_leafdata());
    if (cempmembuffercachehit.is_set || is_set(cempmembuffercachehit.yfilter)) leaf_name_data.push_back(cempmembuffercachehit.get_name_leafdata());
    if (cempmembuffercachemiss.is_set || is_set(cempmembuffercachemiss.yfilter)) leaf_name_data.push_back(cempmembuffercachemiss.get_name_leafdata());
    if (cempmembuffercachethreshold.is_set || is_set(cempmembuffercachethreshold.yfilter)) leaf_name_data.push_back(cempmembuffercachethreshold.get_name_leafdata());
    if (cempmembuffercachethresholdcount.is_set || is_set(cempmembuffercachethresholdcount.yfilter)) leaf_name_data.push_back(cempmembuffercachethresholdcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferPoolIndex")
    {
        cempmembufferpoolindex = value;
        cempmembufferpoolindex.value_namespace = name_space;
        cempmembufferpoolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferCacheSize")
    {
        cempmembuffercachesize = value;
        cempmembuffercachesize.value_namespace = name_space;
        cempmembuffercachesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferCacheTotal")
    {
        cempmembuffercachetotal = value;
        cempmembuffercachetotal.value_namespace = name_space;
        cempmembuffercachetotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferCacheUsed")
    {
        cempmembuffercacheused = value;
        cempmembuffercacheused.value_namespace = name_space;
        cempmembuffercacheused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferCacheHit")
    {
        cempmembuffercachehit = value;
        cempmembuffercachehit.value_namespace = name_space;
        cempmembuffercachehit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferCacheMiss")
    {
        cempmembuffercachemiss = value;
        cempmembuffercachemiss.value_namespace = name_space;
        cempmembuffercachemiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferCacheThreshold")
    {
        cempmembuffercachethreshold = value;
        cempmembuffercachethreshold.value_namespace = name_space;
        cempmembuffercachethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferCacheThresholdCount")
    {
        cempmembuffercachethresholdcount = value;
        cempmembuffercachethresholdcount.value_namespace = name_space;
        cempmembuffercachethresholdcount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPoolIndex")
    {
        cempmembufferpoolindex.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheSize")
    {
        cempmembuffercachesize.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheTotal")
    {
        cempmembuffercachetotal.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheUsed")
    {
        cempmembuffercacheused.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheHit")
    {
        cempmembuffercachehit.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheMiss")
    {
        cempmembuffercachemiss.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheThreshold")
    {
        cempmembuffercachethreshold.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheThresholdCount")
    {
        cempmembuffercachethresholdcount.yfilter = yfilter;
    }
}

bool CISCOENHANCEDMEMPOOLMIB::CempMemBufferCachePoolTable::CempMemBufferCachePoolEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cempMemBufferPoolIndex" || name == "cempMemBufferCacheSize" || name == "cempMemBufferCacheTotal" || name == "cempMemBufferCacheUsed" || name == "cempMemBufferCacheHit" || name == "cempMemBufferCacheMiss" || name == "cempMemBufferCacheThreshold" || name == "cempMemBufferCacheThresholdCount")
        return true;
    return false;
}

const Enum::YLeaf CempMemPoolTypes::other {1, "other"};
const Enum::YLeaf CempMemPoolTypes::processorMemory {2, "processorMemory"};
const Enum::YLeaf CempMemPoolTypes::ioMemory {3, "ioMemory"};
const Enum::YLeaf CempMemPoolTypes::pciMemory {4, "pciMemory"};
const Enum::YLeaf CempMemPoolTypes::fastMemory {5, "fastMemory"};
const Enum::YLeaf CempMemPoolTypes::multibusMemory {6, "multibusMemory"};
const Enum::YLeaf CempMemPoolTypes::interruptStackMemory {7, "interruptStackMemory"};
const Enum::YLeaf CempMemPoolTypes::processStackMemory {8, "processStackMemory"};
const Enum::YLeaf CempMemPoolTypes::localExceptionMemory {9, "localExceptionMemory"};
const Enum::YLeaf CempMemPoolTypes::virtualMemory {10, "virtualMemory"};
const Enum::YLeaf CempMemPoolTypes::reservedMemory {11, "reservedMemory"};
const Enum::YLeaf CempMemPoolTypes::imageMemory {12, "imageMemory"};
const Enum::YLeaf CempMemPoolTypes::asicMemory {13, "asicMemory"};
const Enum::YLeaf CempMemPoolTypes::posixMemory {14, "posixMemory"};


}
}

