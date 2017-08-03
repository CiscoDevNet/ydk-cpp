
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENHANCED_MEMPOOL_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ENHANCED_MEMPOOL_MIB {

CiscoEnhancedMempoolMib::CiscoEnhancedMempoolMib()
    :
    cempmembuffercachepooltable(std::make_shared<CiscoEnhancedMempoolMib::Cempmembuffercachepooltable>())
	,cempmembufferpooltable(std::make_shared<CiscoEnhancedMempoolMib::Cempmembufferpooltable>())
	,cempmempooltable(std::make_shared<CiscoEnhancedMempoolMib::Cempmempooltable>())
	,cempnotificationconfig(std::make_shared<CiscoEnhancedMempoolMib::Cempnotificationconfig>())
{
    cempmembuffercachepooltable->parent = this;

    cempmembufferpooltable->parent = this;

    cempmempooltable->parent = this;

    cempnotificationconfig->parent = this;

    yang_name = "CISCO-ENHANCED-MEMPOOL-MIB"; yang_parent_name = "CISCO-ENHANCED-MEMPOOL-MIB";
}

CiscoEnhancedMempoolMib::~CiscoEnhancedMempoolMib()
{
}

bool CiscoEnhancedMempoolMib::has_data() const
{
    return (cempmembuffercachepooltable !=  nullptr && cempmembuffercachepooltable->has_data())
	|| (cempmembufferpooltable !=  nullptr && cempmembufferpooltable->has_data())
	|| (cempmempooltable !=  nullptr && cempmempooltable->has_data())
	|| (cempnotificationconfig !=  nullptr && cempnotificationconfig->has_data());
}

bool CiscoEnhancedMempoolMib::has_operation() const
{
    return is_set(yfilter)
	|| (cempmembuffercachepooltable !=  nullptr && cempmembuffercachepooltable->has_operation())
	|| (cempmembufferpooltable !=  nullptr && cempmembufferpooltable->has_operation())
	|| (cempmempooltable !=  nullptr && cempmempooltable->has_operation())
	|| (cempnotificationconfig !=  nullptr && cempnotificationconfig->has_operation());
}

std::string CiscoEnhancedMempoolMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEnhancedMempoolMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnhancedMempoolMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cempMemBufferCachePoolTable")
    {
        if(cempmembuffercachepooltable == nullptr)
        {
            cempmembuffercachepooltable = std::make_shared<CiscoEnhancedMempoolMib::Cempmembuffercachepooltable>();
        }
        return cempmembuffercachepooltable;
    }

    if(child_yang_name == "cempMemBufferPoolTable")
    {
        if(cempmembufferpooltable == nullptr)
        {
            cempmembufferpooltable = std::make_shared<CiscoEnhancedMempoolMib::Cempmembufferpooltable>();
        }
        return cempmembufferpooltable;
    }

    if(child_yang_name == "cempMemPoolTable")
    {
        if(cempmempooltable == nullptr)
        {
            cempmempooltable = std::make_shared<CiscoEnhancedMempoolMib::Cempmempooltable>();
        }
        return cempmempooltable;
    }

    if(child_yang_name == "cempNotificationConfig")
    {
        if(cempnotificationconfig == nullptr)
        {
            cempnotificationconfig = std::make_shared<CiscoEnhancedMempoolMib::Cempnotificationconfig>();
        }
        return cempnotificationconfig;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnhancedMempoolMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cempmembuffercachepooltable != nullptr)
    {
        children["cempMemBufferCachePoolTable"] = cempmembuffercachepooltable;
    }

    if(cempmembufferpooltable != nullptr)
    {
        children["cempMemBufferPoolTable"] = cempmembufferpooltable;
    }

    if(cempmempooltable != nullptr)
    {
        children["cempMemPoolTable"] = cempmempooltable;
    }

    if(cempnotificationconfig != nullptr)
    {
        children["cempNotificationConfig"] = cempnotificationconfig;
    }

    return children;
}

void CiscoEnhancedMempoolMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEnhancedMempoolMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoEnhancedMempoolMib::clone_ptr() const
{
    return std::make_shared<CiscoEnhancedMempoolMib>();
}

std::string CiscoEnhancedMempoolMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEnhancedMempoolMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEnhancedMempoolMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoEnhancedMempoolMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoEnhancedMempoolMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cempMemBufferCachePoolTable" || name == "cempMemBufferPoolTable" || name == "cempMemPoolTable" || name == "cempNotificationConfig")
        return true;
    return false;
}

CiscoEnhancedMempoolMib::Cempnotificationconfig::Cempnotificationconfig()
    :
    cempmembuffernotifyenabled{YType::boolean, "cempMemBufferNotifyEnabled"}
{
    yang_name = "cempNotificationConfig"; yang_parent_name = "CISCO-ENHANCED-MEMPOOL-MIB";
}

CiscoEnhancedMempoolMib::Cempnotificationconfig::~Cempnotificationconfig()
{
}

bool CiscoEnhancedMempoolMib::Cempnotificationconfig::has_data() const
{
    return cempmembuffernotifyenabled.is_set;
}

bool CiscoEnhancedMempoolMib::Cempnotificationconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cempmembuffernotifyenabled.yfilter);
}

std::string CiscoEnhancedMempoolMib::Cempnotificationconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempNotificationConfig";

    return path_buffer.str();

}

const EntityPath CiscoEnhancedMempoolMib::Cempnotificationconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cempmembuffernotifyenabled.is_set || is_set(cempmembuffernotifyenabled.yfilter)) leaf_name_data.push_back(cempmembuffernotifyenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnhancedMempoolMib::Cempnotificationconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnhancedMempoolMib::Cempnotificationconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEnhancedMempoolMib::Cempnotificationconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cempMemBufferNotifyEnabled")
    {
        cempmembuffernotifyenabled = value;
        cempmembuffernotifyenabled.value_namespace = name_space;
        cempmembuffernotifyenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEnhancedMempoolMib::Cempnotificationconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cempMemBufferNotifyEnabled")
    {
        cempmembuffernotifyenabled.yfilter = yfilter;
    }
}

bool CiscoEnhancedMempoolMib::Cempnotificationconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cempMemBufferNotifyEnabled")
        return true;
    return false;
}

CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempooltable()
{
    yang_name = "cempMemPoolTable"; yang_parent_name = "CISCO-ENHANCED-MEMPOOL-MIB";
}

CiscoEnhancedMempoolMib::Cempmempooltable::~Cempmempooltable()
{
}

bool CiscoEnhancedMempoolMib::Cempmempooltable::has_data() const
{
    for (std::size_t index=0; index<cempmempoolentry.size(); index++)
    {
        if(cempmempoolentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnhancedMempoolMib::Cempmempooltable::has_operation() const
{
    for (std::size_t index=0; index<cempmempoolentry.size(); index++)
    {
        if(cempmempoolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEnhancedMempoolMib::Cempmempooltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemPoolTable";

    return path_buffer.str();

}

const EntityPath CiscoEnhancedMempoolMib::Cempmempooltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnhancedMempoolMib::Cempmempooltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cempMemPoolEntry")
    {
        for(auto const & c : cempmempoolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry>();
        c->parent = this;
        cempmempoolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnhancedMempoolMib::Cempmempooltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cempmempoolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnhancedMempoolMib::Cempmempooltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEnhancedMempoolMib::Cempmempooltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEnhancedMempoolMib::Cempmempooltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cempMemPoolEntry")
        return true;
    return false;
}

CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::Cempmempoolentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cempmempoolindex{YType::int32, "cempMemPoolIndex"},
    cempmempoolallochit{YType::uint32, "cempMemPoolAllocHit"},
    cempmempoolallocmiss{YType::uint32, "cempMemPoolAllocMiss"},
    cempmempoolalternate{YType::int32, "cempMemPoolAlternate"},
    cempmempoolfree{YType::uint32, "cempMemPoolFree"},
    cempmempoolfreehit{YType::uint32, "cempMemPoolFreeHit"},
    cempmempoolfreemiss{YType::uint32, "cempMemPoolFreeMiss"},
    cempmempoolfreeovrflw{YType::uint32, "cempMemPoolFreeOvrflw"},
    cempmempoolhcfree{YType::uint64, "cempMemPoolHCFree"},
    cempmempoolhclargestfree{YType::uint64, "cempMemPoolHCLargestFree"},
    cempmempoolhclowestfree{YType::uint64, "cempMemPoolHCLowestFree"},
    cempmempoolhcshared{YType::uint64, "cempMemPoolHCShared"},
    cempmempoolhcused{YType::uint64, "cempMemPoolHCUsed"},
    cempmempoolhcusedlowwatermark{YType::uint64, "cempMemPoolHCUsedLowWaterMark"},
    cempmempoollargestfree{YType::uint32, "cempMemPoolLargestFree"},
    cempmempoollargestfreeovrflw{YType::uint32, "cempMemPoolLargestFreeOvrflw"},
    cempmempoollowestfree{YType::uint32, "cempMemPoolLowestFree"},
    cempmempoollowestfreeovrflw{YType::uint32, "cempMemPoolLowestFreeOvrflw"},
    cempmempoolname{YType::str, "cempMemPoolName"},
    cempmempoolplatformmemory{YType::str, "cempMemPoolPlatformMemory"},
    cempmempoolshared{YType::uint32, "cempMemPoolShared"},
    cempmempoolsharedovrflw{YType::uint32, "cempMemPoolSharedOvrflw"},
    cempmempooltype{YType::enumeration, "cempMemPoolType"},
    cempmempoolused{YType::uint32, "cempMemPoolUsed"},
    cempmempoolusedlowwatermark{YType::uint32, "cempMemPoolUsedLowWaterMark"},
    cempmempoolusedlowwatermarkovrflw{YType::uint32, "cempMemPoolUsedLowWaterMarkOvrflw"},
    cempmempoolusedovrflw{YType::uint32, "cempMemPoolUsedOvrflw"},
    cempmempoolvalid{YType::boolean, "cempMemPoolValid"}
{
    yang_name = "cempMemPoolEntry"; yang_parent_name = "cempMemPoolTable";
}

CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::~Cempmempoolentry()
{
}

bool CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::has_data() const
{
    return entphysicalindex.is_set
	|| cempmempoolindex.is_set
	|| cempmempoolallochit.is_set
	|| cempmempoolallocmiss.is_set
	|| cempmempoolalternate.is_set
	|| cempmempoolfree.is_set
	|| cempmempoolfreehit.is_set
	|| cempmempoolfreemiss.is_set
	|| cempmempoolfreeovrflw.is_set
	|| cempmempoolhcfree.is_set
	|| cempmempoolhclargestfree.is_set
	|| cempmempoolhclowestfree.is_set
	|| cempmempoolhcshared.is_set
	|| cempmempoolhcused.is_set
	|| cempmempoolhcusedlowwatermark.is_set
	|| cempmempoollargestfree.is_set
	|| cempmempoollargestfreeovrflw.is_set
	|| cempmempoollowestfree.is_set
	|| cempmempoollowestfreeovrflw.is_set
	|| cempmempoolname.is_set
	|| cempmempoolplatformmemory.is_set
	|| cempmempoolshared.is_set
	|| cempmempoolsharedovrflw.is_set
	|| cempmempooltype.is_set
	|| cempmempoolused.is_set
	|| cempmempoolusedlowwatermark.is_set
	|| cempmempoolusedlowwatermarkovrflw.is_set
	|| cempmempoolusedovrflw.is_set
	|| cempmempoolvalid.is_set;
}

bool CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cempmempoolindex.yfilter)
	|| ydk::is_set(cempmempoolallochit.yfilter)
	|| ydk::is_set(cempmempoolallocmiss.yfilter)
	|| ydk::is_set(cempmempoolalternate.yfilter)
	|| ydk::is_set(cempmempoolfree.yfilter)
	|| ydk::is_set(cempmempoolfreehit.yfilter)
	|| ydk::is_set(cempmempoolfreemiss.yfilter)
	|| ydk::is_set(cempmempoolfreeovrflw.yfilter)
	|| ydk::is_set(cempmempoolhcfree.yfilter)
	|| ydk::is_set(cempmempoolhclargestfree.yfilter)
	|| ydk::is_set(cempmempoolhclowestfree.yfilter)
	|| ydk::is_set(cempmempoolhcshared.yfilter)
	|| ydk::is_set(cempmempoolhcused.yfilter)
	|| ydk::is_set(cempmempoolhcusedlowwatermark.yfilter)
	|| ydk::is_set(cempmempoollargestfree.yfilter)
	|| ydk::is_set(cempmempoollargestfreeovrflw.yfilter)
	|| ydk::is_set(cempmempoollowestfree.yfilter)
	|| ydk::is_set(cempmempoollowestfreeovrflw.yfilter)
	|| ydk::is_set(cempmempoolname.yfilter)
	|| ydk::is_set(cempmempoolplatformmemory.yfilter)
	|| ydk::is_set(cempmempoolshared.yfilter)
	|| ydk::is_set(cempmempoolsharedovrflw.yfilter)
	|| ydk::is_set(cempmempooltype.yfilter)
	|| ydk::is_set(cempmempoolused.yfilter)
	|| ydk::is_set(cempmempoolusedlowwatermark.yfilter)
	|| ydk::is_set(cempmempoolusedlowwatermarkovrflw.yfilter)
	|| ydk::is_set(cempmempoolusedovrflw.yfilter)
	|| ydk::is_set(cempmempoolvalid.yfilter);
}

std::string CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemPoolEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cempMemPoolIndex='" <<cempmempoolindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/cempMemPoolTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cempmempoolindex.is_set || is_set(cempmempoolindex.yfilter)) leaf_name_data.push_back(cempmempoolindex.get_name_leafdata());
    if (cempmempoolallochit.is_set || is_set(cempmempoolallochit.yfilter)) leaf_name_data.push_back(cempmempoolallochit.get_name_leafdata());
    if (cempmempoolallocmiss.is_set || is_set(cempmempoolallocmiss.yfilter)) leaf_name_data.push_back(cempmempoolallocmiss.get_name_leafdata());
    if (cempmempoolalternate.is_set || is_set(cempmempoolalternate.yfilter)) leaf_name_data.push_back(cempmempoolalternate.get_name_leafdata());
    if (cempmempoolfree.is_set || is_set(cempmempoolfree.yfilter)) leaf_name_data.push_back(cempmempoolfree.get_name_leafdata());
    if (cempmempoolfreehit.is_set || is_set(cempmempoolfreehit.yfilter)) leaf_name_data.push_back(cempmempoolfreehit.get_name_leafdata());
    if (cempmempoolfreemiss.is_set || is_set(cempmempoolfreemiss.yfilter)) leaf_name_data.push_back(cempmempoolfreemiss.get_name_leafdata());
    if (cempmempoolfreeovrflw.is_set || is_set(cempmempoolfreeovrflw.yfilter)) leaf_name_data.push_back(cempmempoolfreeovrflw.get_name_leafdata());
    if (cempmempoolhcfree.is_set || is_set(cempmempoolhcfree.yfilter)) leaf_name_data.push_back(cempmempoolhcfree.get_name_leafdata());
    if (cempmempoolhclargestfree.is_set || is_set(cempmempoolhclargestfree.yfilter)) leaf_name_data.push_back(cempmempoolhclargestfree.get_name_leafdata());
    if (cempmempoolhclowestfree.is_set || is_set(cempmempoolhclowestfree.yfilter)) leaf_name_data.push_back(cempmempoolhclowestfree.get_name_leafdata());
    if (cempmempoolhcshared.is_set || is_set(cempmempoolhcshared.yfilter)) leaf_name_data.push_back(cempmempoolhcshared.get_name_leafdata());
    if (cempmempoolhcused.is_set || is_set(cempmempoolhcused.yfilter)) leaf_name_data.push_back(cempmempoolhcused.get_name_leafdata());
    if (cempmempoolhcusedlowwatermark.is_set || is_set(cempmempoolhcusedlowwatermark.yfilter)) leaf_name_data.push_back(cempmempoolhcusedlowwatermark.get_name_leafdata());
    if (cempmempoollargestfree.is_set || is_set(cempmempoollargestfree.yfilter)) leaf_name_data.push_back(cempmempoollargestfree.get_name_leafdata());
    if (cempmempoollargestfreeovrflw.is_set || is_set(cempmempoollargestfreeovrflw.yfilter)) leaf_name_data.push_back(cempmempoollargestfreeovrflw.get_name_leafdata());
    if (cempmempoollowestfree.is_set || is_set(cempmempoollowestfree.yfilter)) leaf_name_data.push_back(cempmempoollowestfree.get_name_leafdata());
    if (cempmempoollowestfreeovrflw.is_set || is_set(cempmempoollowestfreeovrflw.yfilter)) leaf_name_data.push_back(cempmempoollowestfreeovrflw.get_name_leafdata());
    if (cempmempoolname.is_set || is_set(cempmempoolname.yfilter)) leaf_name_data.push_back(cempmempoolname.get_name_leafdata());
    if (cempmempoolplatformmemory.is_set || is_set(cempmempoolplatformmemory.yfilter)) leaf_name_data.push_back(cempmempoolplatformmemory.get_name_leafdata());
    if (cempmempoolshared.is_set || is_set(cempmempoolshared.yfilter)) leaf_name_data.push_back(cempmempoolshared.get_name_leafdata());
    if (cempmempoolsharedovrflw.is_set || is_set(cempmempoolsharedovrflw.yfilter)) leaf_name_data.push_back(cempmempoolsharedovrflw.get_name_leafdata());
    if (cempmempooltype.is_set || is_set(cempmempooltype.yfilter)) leaf_name_data.push_back(cempmempooltype.get_name_leafdata());
    if (cempmempoolused.is_set || is_set(cempmempoolused.yfilter)) leaf_name_data.push_back(cempmempoolused.get_name_leafdata());
    if (cempmempoolusedlowwatermark.is_set || is_set(cempmempoolusedlowwatermark.yfilter)) leaf_name_data.push_back(cempmempoolusedlowwatermark.get_name_leafdata());
    if (cempmempoolusedlowwatermarkovrflw.is_set || is_set(cempmempoolusedlowwatermarkovrflw.yfilter)) leaf_name_data.push_back(cempmempoolusedlowwatermarkovrflw.get_name_leafdata());
    if (cempmempoolusedovrflw.is_set || is_set(cempmempoolusedovrflw.yfilter)) leaf_name_data.push_back(cempmempoolusedovrflw.get_name_leafdata());
    if (cempmempoolvalid.is_set || is_set(cempmempoolvalid.yfilter)) leaf_name_data.push_back(cempmempoolvalid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cempMemPoolAlternate")
    {
        cempmempoolalternate = value;
        cempmempoolalternate.value_namespace = name_space;
        cempmempoolalternate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolFree")
    {
        cempmempoolfree = value;
        cempmempoolfree.value_namespace = name_space;
        cempmempoolfree.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cempMemPoolHCLargestFree")
    {
        cempmempoolhclargestfree = value;
        cempmempoolhclargestfree.value_namespace = name_space;
        cempmempoolhclargestfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolHCLowestFree")
    {
        cempmempoolhclowestfree = value;
        cempmempoolhclowestfree.value_namespace = name_space;
        cempmempoolhclowestfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolHCShared")
    {
        cempmempoolhcshared = value;
        cempmempoolhcshared.value_namespace = name_space;
        cempmempoolhcshared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolHCUsed")
    {
        cempmempoolhcused = value;
        cempmempoolhcused.value_namespace = name_space;
        cempmempoolhcused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolHCUsedLowWaterMark")
    {
        cempmempoolhcusedlowwatermark = value;
        cempmempoolhcusedlowwatermark.value_namespace = name_space;
        cempmempoolhcusedlowwatermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolLargestFree")
    {
        cempmempoollargestfree = value;
        cempmempoollargestfree.value_namespace = name_space;
        cempmempoollargestfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolLargestFreeOvrflw")
    {
        cempmempoollargestfreeovrflw = value;
        cempmempoollargestfreeovrflw.value_namespace = name_space;
        cempmempoollargestfreeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolLowestFree")
    {
        cempmempoollowestfree = value;
        cempmempoollowestfree.value_namespace = name_space;
        cempmempoollowestfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolLowestFreeOvrflw")
    {
        cempmempoollowestfreeovrflw = value;
        cempmempoollowestfreeovrflw.value_namespace = name_space;
        cempmempoollowestfreeovrflw.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cempMemPoolShared")
    {
        cempmempoolshared = value;
        cempmempoolshared.value_namespace = name_space;
        cempmempoolshared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolSharedOvrflw")
    {
        cempmempoolsharedovrflw = value;
        cempmempoolsharedovrflw.value_namespace = name_space;
        cempmempoolsharedovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolType")
    {
        cempmempooltype = value;
        cempmempooltype.value_namespace = name_space;
        cempmempooltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolUsed")
    {
        cempmempoolused = value;
        cempmempoolused.value_namespace = name_space;
        cempmempoolused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolUsedLowWaterMark")
    {
        cempmempoolusedlowwatermark = value;
        cempmempoolusedlowwatermark.value_namespace = name_space;
        cempmempoolusedlowwatermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolUsedLowWaterMarkOvrflw")
    {
        cempmempoolusedlowwatermarkovrflw = value;
        cempmempoolusedlowwatermarkovrflw.value_namespace = name_space;
        cempmempoolusedlowwatermarkovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolUsedOvrflw")
    {
        cempmempoolusedovrflw = value;
        cempmempoolusedovrflw.value_namespace = name_space;
        cempmempoolusedovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemPoolValid")
    {
        cempmempoolvalid = value;
        cempmempoolvalid.value_namespace = name_space;
        cempmempoolvalid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolIndex")
    {
        cempmempoolindex.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolAllocHit")
    {
        cempmempoolallochit.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolAllocMiss")
    {
        cempmempoolallocmiss.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolAlternate")
    {
        cempmempoolalternate.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolFree")
    {
        cempmempoolfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolFreeHit")
    {
        cempmempoolfreehit.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolFreeMiss")
    {
        cempmempoolfreemiss.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolFreeOvrflw")
    {
        cempmempoolfreeovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCFree")
    {
        cempmempoolhcfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCLargestFree")
    {
        cempmempoolhclargestfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCLowestFree")
    {
        cempmempoolhclowestfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCShared")
    {
        cempmempoolhcshared.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCUsed")
    {
        cempmempoolhcused.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolHCUsedLowWaterMark")
    {
        cempmempoolhcusedlowwatermark.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolLargestFree")
    {
        cempmempoollargestfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolLargestFreeOvrflw")
    {
        cempmempoollargestfreeovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolLowestFree")
    {
        cempmempoollowestfree.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolLowestFreeOvrflw")
    {
        cempmempoollowestfreeovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolName")
    {
        cempmempoolname.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolPlatformMemory")
    {
        cempmempoolplatformmemory.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolShared")
    {
        cempmempoolshared.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolSharedOvrflw")
    {
        cempmempoolsharedovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolType")
    {
        cempmempooltype.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolUsed")
    {
        cempmempoolused.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolUsedLowWaterMark")
    {
        cempmempoolusedlowwatermark.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolUsedLowWaterMarkOvrflw")
    {
        cempmempoolusedlowwatermarkovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolUsedOvrflw")
    {
        cempmempoolusedovrflw.yfilter = yfilter;
    }
    if(value_path == "cempMemPoolValid")
    {
        cempmempoolvalid.yfilter = yfilter;
    }
}

bool CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cempMemPoolIndex" || name == "cempMemPoolAllocHit" || name == "cempMemPoolAllocMiss" || name == "cempMemPoolAlternate" || name == "cempMemPoolFree" || name == "cempMemPoolFreeHit" || name == "cempMemPoolFreeMiss" || name == "cempMemPoolFreeOvrflw" || name == "cempMemPoolHCFree" || name == "cempMemPoolHCLargestFree" || name == "cempMemPoolHCLowestFree" || name == "cempMemPoolHCShared" || name == "cempMemPoolHCUsed" || name == "cempMemPoolHCUsedLowWaterMark" || name == "cempMemPoolLargestFree" || name == "cempMemPoolLargestFreeOvrflw" || name == "cempMemPoolLowestFree" || name == "cempMemPoolLowestFreeOvrflw" || name == "cempMemPoolName" || name == "cempMemPoolPlatformMemory" || name == "cempMemPoolShared" || name == "cempMemPoolSharedOvrflw" || name == "cempMemPoolType" || name == "cempMemPoolUsed" || name == "cempMemPoolUsedLowWaterMark" || name == "cempMemPoolUsedLowWaterMarkOvrflw" || name == "cempMemPoolUsedOvrflw" || name == "cempMemPoolValid")
        return true;
    return false;
}

CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpooltable()
{
    yang_name = "cempMemBufferPoolTable"; yang_parent_name = "CISCO-ENHANCED-MEMPOOL-MIB";
}

CiscoEnhancedMempoolMib::Cempmembufferpooltable::~Cempmembufferpooltable()
{
}

bool CiscoEnhancedMempoolMib::Cempmembufferpooltable::has_data() const
{
    for (std::size_t index=0; index<cempmembufferpoolentry.size(); index++)
    {
        if(cempmembufferpoolentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnhancedMempoolMib::Cempmembufferpooltable::has_operation() const
{
    for (std::size_t index=0; index<cempmembufferpoolentry.size(); index++)
    {
        if(cempmembufferpoolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEnhancedMempoolMib::Cempmembufferpooltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemBufferPoolTable";

    return path_buffer.str();

}

const EntityPath CiscoEnhancedMempoolMib::Cempmembufferpooltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnhancedMempoolMib::Cempmembufferpooltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cempMemBufferPoolEntry")
    {
        for(auto const & c : cempmembufferpoolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry>();
        c->parent = this;
        cempmembufferpoolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnhancedMempoolMib::Cempmembufferpooltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cempmembufferpoolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnhancedMempoolMib::Cempmembufferpooltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEnhancedMempoolMib::Cempmembufferpooltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEnhancedMempoolMib::Cempmembufferpooltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cempMemBufferPoolEntry")
        return true;
    return false;
}

CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::Cempmembufferpoolentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cempmembufferpoolindex{YType::uint32, "cempMemBufferPoolIndex"},
    cempmembufferdynamic{YType::boolean, "cempMemBufferDynamic"},
    cempmembufferfailures{YType::uint32, "cempMemBufferFailures"},
    cempmembufferfree{YType::uint32, "cempMemBufferFree"},
    cempmembufferfreehit{YType::uint32, "cempMemBufferFreeHit"},
    cempmembufferfreemiss{YType::uint32, "cempMemBufferFreeMiss"},
    cempmembuffergrow{YType::uint32, "cempMemBufferGrow"},
    cempmembufferhit{YType::uint32, "cempMemBufferHit"},
    cempmembuffermax{YType::uint32, "cempMemBufferMax"},
    cempmembuffermempoolindex{YType::int32, "cempMemBufferMemPoolIndex"},
    cempmembuffermin{YType::uint32, "cempMemBufferMin"},
    cempmembuffermiss{YType::uint32, "cempMemBufferMiss"},
    cempmembuffername{YType::str, "cempMemBufferName"},
    cempmembuffernostorage{YType::uint32, "cempMemBufferNoStorage"},
    cempmembufferpeak{YType::uint32, "cempMemBufferPeak"},
    cempmembufferpeaktime{YType::uint32, "cempMemBufferPeakTime"},
    cempmembufferpermanent{YType::uint32, "cempMemBufferPermanent"},
    cempmembufferpermchange{YType::int32, "cempMemBufferPermChange"},
    cempmembuffersize{YType::uint32, "cempMemBufferSize"},
    cempmembuffertotal{YType::uint32, "cempMemBufferTotal"},
    cempmembuffertransient{YType::uint32, "cempMemBufferTransient"},
    cempmembuffertrim{YType::uint32, "cempMemBufferTrim"}
{
    yang_name = "cempMemBufferPoolEntry"; yang_parent_name = "cempMemBufferPoolTable";
}

CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::~Cempmembufferpoolentry()
{
}

bool CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::has_data() const
{
    return entphysicalindex.is_set
	|| cempmembufferpoolindex.is_set
	|| cempmembufferdynamic.is_set
	|| cempmembufferfailures.is_set
	|| cempmembufferfree.is_set
	|| cempmembufferfreehit.is_set
	|| cempmembufferfreemiss.is_set
	|| cempmembuffergrow.is_set
	|| cempmembufferhit.is_set
	|| cempmembuffermax.is_set
	|| cempmembuffermempoolindex.is_set
	|| cempmembuffermin.is_set
	|| cempmembuffermiss.is_set
	|| cempmembuffername.is_set
	|| cempmembuffernostorage.is_set
	|| cempmembufferpeak.is_set
	|| cempmembufferpeaktime.is_set
	|| cempmembufferpermanent.is_set
	|| cempmembufferpermchange.is_set
	|| cempmembuffersize.is_set
	|| cempmembuffertotal.is_set
	|| cempmembuffertransient.is_set
	|| cempmembuffertrim.is_set;
}

bool CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cempmembufferpoolindex.yfilter)
	|| ydk::is_set(cempmembufferdynamic.yfilter)
	|| ydk::is_set(cempmembufferfailures.yfilter)
	|| ydk::is_set(cempmembufferfree.yfilter)
	|| ydk::is_set(cempmembufferfreehit.yfilter)
	|| ydk::is_set(cempmembufferfreemiss.yfilter)
	|| ydk::is_set(cempmembuffergrow.yfilter)
	|| ydk::is_set(cempmembufferhit.yfilter)
	|| ydk::is_set(cempmembuffermax.yfilter)
	|| ydk::is_set(cempmembuffermempoolindex.yfilter)
	|| ydk::is_set(cempmembuffermin.yfilter)
	|| ydk::is_set(cempmembuffermiss.yfilter)
	|| ydk::is_set(cempmembuffername.yfilter)
	|| ydk::is_set(cempmembuffernostorage.yfilter)
	|| ydk::is_set(cempmembufferpeak.yfilter)
	|| ydk::is_set(cempmembufferpeaktime.yfilter)
	|| ydk::is_set(cempmembufferpermanent.yfilter)
	|| ydk::is_set(cempmembufferpermchange.yfilter)
	|| ydk::is_set(cempmembuffersize.yfilter)
	|| ydk::is_set(cempmembuffertotal.yfilter)
	|| ydk::is_set(cempmembuffertransient.yfilter)
	|| ydk::is_set(cempmembuffertrim.yfilter);
}

std::string CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemBufferPoolEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cempMemBufferPoolIndex='" <<cempmembufferpoolindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/cempMemBufferPoolTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cempmembufferpoolindex.is_set || is_set(cempmembufferpoolindex.yfilter)) leaf_name_data.push_back(cempmembufferpoolindex.get_name_leafdata());
    if (cempmembufferdynamic.is_set || is_set(cempmembufferdynamic.yfilter)) leaf_name_data.push_back(cempmembufferdynamic.get_name_leafdata());
    if (cempmembufferfailures.is_set || is_set(cempmembufferfailures.yfilter)) leaf_name_data.push_back(cempmembufferfailures.get_name_leafdata());
    if (cempmembufferfree.is_set || is_set(cempmembufferfree.yfilter)) leaf_name_data.push_back(cempmembufferfree.get_name_leafdata());
    if (cempmembufferfreehit.is_set || is_set(cempmembufferfreehit.yfilter)) leaf_name_data.push_back(cempmembufferfreehit.get_name_leafdata());
    if (cempmembufferfreemiss.is_set || is_set(cempmembufferfreemiss.yfilter)) leaf_name_data.push_back(cempmembufferfreemiss.get_name_leafdata());
    if (cempmembuffergrow.is_set || is_set(cempmembuffergrow.yfilter)) leaf_name_data.push_back(cempmembuffergrow.get_name_leafdata());
    if (cempmembufferhit.is_set || is_set(cempmembufferhit.yfilter)) leaf_name_data.push_back(cempmembufferhit.get_name_leafdata());
    if (cempmembuffermax.is_set || is_set(cempmembuffermax.yfilter)) leaf_name_data.push_back(cempmembuffermax.get_name_leafdata());
    if (cempmembuffermempoolindex.is_set || is_set(cempmembuffermempoolindex.yfilter)) leaf_name_data.push_back(cempmembuffermempoolindex.get_name_leafdata());
    if (cempmembuffermin.is_set || is_set(cempmembuffermin.yfilter)) leaf_name_data.push_back(cempmembuffermin.get_name_leafdata());
    if (cempmembuffermiss.is_set || is_set(cempmembuffermiss.yfilter)) leaf_name_data.push_back(cempmembuffermiss.get_name_leafdata());
    if (cempmembuffername.is_set || is_set(cempmembuffername.yfilter)) leaf_name_data.push_back(cempmembuffername.get_name_leafdata());
    if (cempmembuffernostorage.is_set || is_set(cempmembuffernostorage.yfilter)) leaf_name_data.push_back(cempmembuffernostorage.get_name_leafdata());
    if (cempmembufferpeak.is_set || is_set(cempmembufferpeak.yfilter)) leaf_name_data.push_back(cempmembufferpeak.get_name_leafdata());
    if (cempmembufferpeaktime.is_set || is_set(cempmembufferpeaktime.yfilter)) leaf_name_data.push_back(cempmembufferpeaktime.get_name_leafdata());
    if (cempmembufferpermanent.is_set || is_set(cempmembufferpermanent.yfilter)) leaf_name_data.push_back(cempmembufferpermanent.get_name_leafdata());
    if (cempmembufferpermchange.is_set || is_set(cempmembufferpermchange.yfilter)) leaf_name_data.push_back(cempmembufferpermchange.get_name_leafdata());
    if (cempmembuffersize.is_set || is_set(cempmembuffersize.yfilter)) leaf_name_data.push_back(cempmembuffersize.get_name_leafdata());
    if (cempmembuffertotal.is_set || is_set(cempmembuffertotal.yfilter)) leaf_name_data.push_back(cempmembuffertotal.get_name_leafdata());
    if (cempmembuffertransient.is_set || is_set(cempmembuffertransient.yfilter)) leaf_name_data.push_back(cempmembuffertransient.get_name_leafdata());
    if (cempmembuffertrim.is_set || is_set(cempmembuffertrim.yfilter)) leaf_name_data.push_back(cempmembuffertrim.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cempMemBufferDynamic")
    {
        cempmembufferdynamic = value;
        cempmembufferdynamic.value_namespace = name_space;
        cempmembufferdynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferFailures")
    {
        cempmembufferfailures = value;
        cempmembufferfailures.value_namespace = name_space;
        cempmembufferfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferFree")
    {
        cempmembufferfree = value;
        cempmembufferfree.value_namespace = name_space;
        cempmembufferfree.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cempMemBufferGrow")
    {
        cempmembuffergrow = value;
        cempmembuffergrow.value_namespace = name_space;
        cempmembuffergrow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferHit")
    {
        cempmembufferhit = value;
        cempmembufferhit.value_namespace = name_space;
        cempmembufferhit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferMax")
    {
        cempmembuffermax = value;
        cempmembuffermax.value_namespace = name_space;
        cempmembuffermax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferMemPoolIndex")
    {
        cempmembuffermempoolindex = value;
        cempmembuffermempoolindex.value_namespace = name_space;
        cempmembuffermempoolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferMin")
    {
        cempmembuffermin = value;
        cempmembuffermin.value_namespace = name_space;
        cempmembuffermin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferMiss")
    {
        cempmembuffermiss = value;
        cempmembuffermiss.value_namespace = name_space;
        cempmembuffermiss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferName")
    {
        cempmembuffername = value;
        cempmembuffername.value_namespace = name_space;
        cempmembuffername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferNoStorage")
    {
        cempmembuffernostorage = value;
        cempmembuffernostorage.value_namespace = name_space;
        cempmembuffernostorage.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cempMemBufferPermanent")
    {
        cempmembufferpermanent = value;
        cempmembufferpermanent.value_namespace = name_space;
        cempmembufferpermanent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferPermChange")
    {
        cempmembufferpermchange = value;
        cempmembufferpermchange.value_namespace = name_space;
        cempmembufferpermchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferSize")
    {
        cempmembuffersize = value;
        cempmembuffersize.value_namespace = name_space;
        cempmembuffersize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferTotal")
    {
        cempmembuffertotal = value;
        cempmembuffertotal.value_namespace = name_space;
        cempmembuffertotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferTransient")
    {
        cempmembuffertransient = value;
        cempmembuffertransient.value_namespace = name_space;
        cempmembuffertransient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cempMemBufferTrim")
    {
        cempmembuffertrim = value;
        cempmembuffertrim.value_namespace = name_space;
        cempmembuffertrim.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPoolIndex")
    {
        cempmembufferpoolindex.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferDynamic")
    {
        cempmembufferdynamic.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferFailures")
    {
        cempmembufferfailures.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferFree")
    {
        cempmembufferfree.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferFreeHit")
    {
        cempmembufferfreehit.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferFreeMiss")
    {
        cempmembufferfreemiss.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferGrow")
    {
        cempmembuffergrow.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferHit")
    {
        cempmembufferhit.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferMax")
    {
        cempmembuffermax.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferMemPoolIndex")
    {
        cempmembuffermempoolindex.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferMin")
    {
        cempmembuffermin.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferMiss")
    {
        cempmembuffermiss.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferName")
    {
        cempmembuffername.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferNoStorage")
    {
        cempmembuffernostorage.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPeak")
    {
        cempmembufferpeak.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPeakTime")
    {
        cempmembufferpeaktime.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPermanent")
    {
        cempmembufferpermanent.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPermChange")
    {
        cempmembufferpermchange.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferSize")
    {
        cempmembuffersize.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferTotal")
    {
        cempmembuffertotal.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferTransient")
    {
        cempmembuffertransient.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferTrim")
    {
        cempmembuffertrim.yfilter = yfilter;
    }
}

bool CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cempMemBufferPoolIndex" || name == "cempMemBufferDynamic" || name == "cempMemBufferFailures" || name == "cempMemBufferFree" || name == "cempMemBufferFreeHit" || name == "cempMemBufferFreeMiss" || name == "cempMemBufferGrow" || name == "cempMemBufferHit" || name == "cempMemBufferMax" || name == "cempMemBufferMemPoolIndex" || name == "cempMemBufferMin" || name == "cempMemBufferMiss" || name == "cempMemBufferName" || name == "cempMemBufferNoStorage" || name == "cempMemBufferPeak" || name == "cempMemBufferPeakTime" || name == "cempMemBufferPermanent" || name == "cempMemBufferPermChange" || name == "cempMemBufferSize" || name == "cempMemBufferTotal" || name == "cempMemBufferTransient" || name == "cempMemBufferTrim")
        return true;
    return false;
}

CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepooltable()
{
    yang_name = "cempMemBufferCachePoolTable"; yang_parent_name = "CISCO-ENHANCED-MEMPOOL-MIB";
}

CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::~Cempmembuffercachepooltable()
{
}

bool CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::has_data() const
{
    for (std::size_t index=0; index<cempmembuffercachepoolentry.size(); index++)
    {
        if(cempmembuffercachepoolentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::has_operation() const
{
    for (std::size_t index=0; index<cempmembuffercachepoolentry.size(); index++)
    {
        if(cempmembuffercachepoolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemBufferCachePoolTable";

    return path_buffer.str();

}

const EntityPath CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cempMemBufferCachePoolEntry")
    {
        for(auto const & c : cempmembuffercachepoolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry>();
        c->parent = this;
        cempmembuffercachepoolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cempmembuffercachepoolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cempMemBufferCachePoolEntry")
        return true;
    return false;
}

CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::Cempmembuffercachepoolentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cempmembufferpoolindex{YType::str, "cempMemBufferPoolIndex"},
    cempmembuffercachehit{YType::uint32, "cempMemBufferCacheHit"},
    cempmembuffercachemiss{YType::uint32, "cempMemBufferCacheMiss"},
    cempmembuffercachesize{YType::uint32, "cempMemBufferCacheSize"},
    cempmembuffercachethreshold{YType::uint32, "cempMemBufferCacheThreshold"},
    cempmembuffercachethresholdcount{YType::uint32, "cempMemBufferCacheThresholdCount"},
    cempmembuffercachetotal{YType::uint32, "cempMemBufferCacheTotal"},
    cempmembuffercacheused{YType::uint32, "cempMemBufferCacheUsed"}
{
    yang_name = "cempMemBufferCachePoolEntry"; yang_parent_name = "cempMemBufferCachePoolTable";
}

CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::~Cempmembuffercachepoolentry()
{
}

bool CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::has_data() const
{
    return entphysicalindex.is_set
	|| cempmembufferpoolindex.is_set
	|| cempmembuffercachehit.is_set
	|| cempmembuffercachemiss.is_set
	|| cempmembuffercachesize.is_set
	|| cempmembuffercachethreshold.is_set
	|| cempmembuffercachethresholdcount.is_set
	|| cempmembuffercachetotal.is_set
	|| cempmembuffercacheused.is_set;
}

bool CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cempmembufferpoolindex.yfilter)
	|| ydk::is_set(cempmembuffercachehit.yfilter)
	|| ydk::is_set(cempmembuffercachemiss.yfilter)
	|| ydk::is_set(cempmembuffercachesize.yfilter)
	|| ydk::is_set(cempmembuffercachethreshold.yfilter)
	|| ydk::is_set(cempmembuffercachethresholdcount.yfilter)
	|| ydk::is_set(cempmembuffercachetotal.yfilter)
	|| ydk::is_set(cempmembuffercacheused.yfilter);
}

std::string CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cempMemBufferCachePoolEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cempMemBufferPoolIndex='" <<cempmembufferpoolindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENHANCED-MEMPOOL-MIB:CISCO-ENHANCED-MEMPOOL-MIB/cempMemBufferCachePoolTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cempmembufferpoolindex.is_set || is_set(cempmembufferpoolindex.yfilter)) leaf_name_data.push_back(cempmembufferpoolindex.get_name_leafdata());
    if (cempmembuffercachehit.is_set || is_set(cempmembuffercachehit.yfilter)) leaf_name_data.push_back(cempmembuffercachehit.get_name_leafdata());
    if (cempmembuffercachemiss.is_set || is_set(cempmembuffercachemiss.yfilter)) leaf_name_data.push_back(cempmembuffercachemiss.get_name_leafdata());
    if (cempmembuffercachesize.is_set || is_set(cempmembuffercachesize.yfilter)) leaf_name_data.push_back(cempmembuffercachesize.get_name_leafdata());
    if (cempmembuffercachethreshold.is_set || is_set(cempmembuffercachethreshold.yfilter)) leaf_name_data.push_back(cempmembuffercachethreshold.get_name_leafdata());
    if (cempmembuffercachethresholdcount.is_set || is_set(cempmembuffercachethresholdcount.yfilter)) leaf_name_data.push_back(cempmembuffercachethresholdcount.get_name_leafdata());
    if (cempmembuffercachetotal.is_set || is_set(cempmembuffercachetotal.yfilter)) leaf_name_data.push_back(cempmembuffercachetotal.get_name_leafdata());
    if (cempmembuffercacheused.is_set || is_set(cempmembuffercacheused.yfilter)) leaf_name_data.push_back(cempmembuffercacheused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cempMemBufferCacheSize")
    {
        cempmembuffercachesize = value;
        cempmembuffercachesize.value_namespace = name_space;
        cempmembuffercachesize.value_namespace_prefix = name_space_prefix;
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
}

void CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferPoolIndex")
    {
        cempmembufferpoolindex.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheHit")
    {
        cempmembuffercachehit.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheMiss")
    {
        cempmembuffercachemiss.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheSize")
    {
        cempmembuffercachesize.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheThreshold")
    {
        cempmembuffercachethreshold.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheThresholdCount")
    {
        cempmembuffercachethresholdcount.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheTotal")
    {
        cempmembuffercachetotal.yfilter = yfilter;
    }
    if(value_path == "cempMemBufferCacheUsed")
    {
        cempmembuffercacheused.yfilter = yfilter;
    }
}

bool CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cempMemBufferPoolIndex" || name == "cempMemBufferCacheHit" || name == "cempMemBufferCacheMiss" || name == "cempMemBufferCacheSize" || name == "cempMemBufferCacheThreshold" || name == "cempMemBufferCacheThresholdCount" || name == "cempMemBufferCacheTotal" || name == "cempMemBufferCacheUsed")
        return true;
    return false;
}

const Enum::YLeaf Cempmempooltypes::other {1, "other"};
const Enum::YLeaf Cempmempooltypes::processorMemory {2, "processorMemory"};
const Enum::YLeaf Cempmempooltypes::ioMemory {3, "ioMemory"};
const Enum::YLeaf Cempmempooltypes::pciMemory {4, "pciMemory"};
const Enum::YLeaf Cempmempooltypes::fastMemory {5, "fastMemory"};
const Enum::YLeaf Cempmempooltypes::multibusMemory {6, "multibusMemory"};
const Enum::YLeaf Cempmempooltypes::interruptStackMemory {7, "interruptStackMemory"};
const Enum::YLeaf Cempmempooltypes::processStackMemory {8, "processStackMemory"};
const Enum::YLeaf Cempmempooltypes::localExceptionMemory {9, "localExceptionMemory"};
const Enum::YLeaf Cempmempooltypes::virtualMemory {10, "virtualMemory"};
const Enum::YLeaf Cempmempooltypes::reservedMemory {11, "reservedMemory"};
const Enum::YLeaf Cempmempooltypes::imageMemory {12, "imageMemory"};
const Enum::YLeaf Cempmempooltypes::asicMemory {13, "asicMemory"};
const Enum::YLeaf Cempmempooltypes::posixMemory {14, "posixMemory"};


}
}

