
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENHANCED_MEMPOOL_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void CiscoEnhancedMempoolMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(cempmembuffernotifyenabled.operation);
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

    if (cempmembuffernotifyenabled.is_set || is_set(cempmembuffernotifyenabled.operation)) leaf_name_data.push_back(cempmembuffernotifyenabled.get_name_leafdata());


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

void CiscoEnhancedMempoolMib::Cempnotificationconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cempMemBufferNotifyEnabled")
    {
        cempmembuffernotifyenabled = value;
    }
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
    return is_set(operation);
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

void CiscoEnhancedMempoolMib::Cempmempooltable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cempmempoolindex.operation)
	|| is_set(cempmempoolallochit.operation)
	|| is_set(cempmempoolallocmiss.operation)
	|| is_set(cempmempoolalternate.operation)
	|| is_set(cempmempoolfree.operation)
	|| is_set(cempmempoolfreehit.operation)
	|| is_set(cempmempoolfreemiss.operation)
	|| is_set(cempmempoolfreeovrflw.operation)
	|| is_set(cempmempoolhcfree.operation)
	|| is_set(cempmempoolhclargestfree.operation)
	|| is_set(cempmempoolhclowestfree.operation)
	|| is_set(cempmempoolhcshared.operation)
	|| is_set(cempmempoolhcused.operation)
	|| is_set(cempmempoolhcusedlowwatermark.operation)
	|| is_set(cempmempoollargestfree.operation)
	|| is_set(cempmempoollargestfreeovrflw.operation)
	|| is_set(cempmempoollowestfree.operation)
	|| is_set(cempmempoollowestfreeovrflw.operation)
	|| is_set(cempmempoolname.operation)
	|| is_set(cempmempoolplatformmemory.operation)
	|| is_set(cempmempoolshared.operation)
	|| is_set(cempmempoolsharedovrflw.operation)
	|| is_set(cempmempooltype.operation)
	|| is_set(cempmempoolused.operation)
	|| is_set(cempmempoolusedlowwatermark.operation)
	|| is_set(cempmempoolusedlowwatermarkovrflw.operation)
	|| is_set(cempmempoolusedovrflw.operation)
	|| is_set(cempmempoolvalid.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cempmempoolindex.is_set || is_set(cempmempoolindex.operation)) leaf_name_data.push_back(cempmempoolindex.get_name_leafdata());
    if (cempmempoolallochit.is_set || is_set(cempmempoolallochit.operation)) leaf_name_data.push_back(cempmempoolallochit.get_name_leafdata());
    if (cempmempoolallocmiss.is_set || is_set(cempmempoolallocmiss.operation)) leaf_name_data.push_back(cempmempoolallocmiss.get_name_leafdata());
    if (cempmempoolalternate.is_set || is_set(cempmempoolalternate.operation)) leaf_name_data.push_back(cempmempoolalternate.get_name_leafdata());
    if (cempmempoolfree.is_set || is_set(cempmempoolfree.operation)) leaf_name_data.push_back(cempmempoolfree.get_name_leafdata());
    if (cempmempoolfreehit.is_set || is_set(cempmempoolfreehit.operation)) leaf_name_data.push_back(cempmempoolfreehit.get_name_leafdata());
    if (cempmempoolfreemiss.is_set || is_set(cempmempoolfreemiss.operation)) leaf_name_data.push_back(cempmempoolfreemiss.get_name_leafdata());
    if (cempmempoolfreeovrflw.is_set || is_set(cempmempoolfreeovrflw.operation)) leaf_name_data.push_back(cempmempoolfreeovrflw.get_name_leafdata());
    if (cempmempoolhcfree.is_set || is_set(cempmempoolhcfree.operation)) leaf_name_data.push_back(cempmempoolhcfree.get_name_leafdata());
    if (cempmempoolhclargestfree.is_set || is_set(cempmempoolhclargestfree.operation)) leaf_name_data.push_back(cempmempoolhclargestfree.get_name_leafdata());
    if (cempmempoolhclowestfree.is_set || is_set(cempmempoolhclowestfree.operation)) leaf_name_data.push_back(cempmempoolhclowestfree.get_name_leafdata());
    if (cempmempoolhcshared.is_set || is_set(cempmempoolhcshared.operation)) leaf_name_data.push_back(cempmempoolhcshared.get_name_leafdata());
    if (cempmempoolhcused.is_set || is_set(cempmempoolhcused.operation)) leaf_name_data.push_back(cempmempoolhcused.get_name_leafdata());
    if (cempmempoolhcusedlowwatermark.is_set || is_set(cempmempoolhcusedlowwatermark.operation)) leaf_name_data.push_back(cempmempoolhcusedlowwatermark.get_name_leafdata());
    if (cempmempoollargestfree.is_set || is_set(cempmempoollargestfree.operation)) leaf_name_data.push_back(cempmempoollargestfree.get_name_leafdata());
    if (cempmempoollargestfreeovrflw.is_set || is_set(cempmempoollargestfreeovrflw.operation)) leaf_name_data.push_back(cempmempoollargestfreeovrflw.get_name_leafdata());
    if (cempmempoollowestfree.is_set || is_set(cempmempoollowestfree.operation)) leaf_name_data.push_back(cempmempoollowestfree.get_name_leafdata());
    if (cempmempoollowestfreeovrflw.is_set || is_set(cempmempoollowestfreeovrflw.operation)) leaf_name_data.push_back(cempmempoollowestfreeovrflw.get_name_leafdata());
    if (cempmempoolname.is_set || is_set(cempmempoolname.operation)) leaf_name_data.push_back(cempmempoolname.get_name_leafdata());
    if (cempmempoolplatformmemory.is_set || is_set(cempmempoolplatformmemory.operation)) leaf_name_data.push_back(cempmempoolplatformmemory.get_name_leafdata());
    if (cempmempoolshared.is_set || is_set(cempmempoolshared.operation)) leaf_name_data.push_back(cempmempoolshared.get_name_leafdata());
    if (cempmempoolsharedovrflw.is_set || is_set(cempmempoolsharedovrflw.operation)) leaf_name_data.push_back(cempmempoolsharedovrflw.get_name_leafdata());
    if (cempmempooltype.is_set || is_set(cempmempooltype.operation)) leaf_name_data.push_back(cempmempooltype.get_name_leafdata());
    if (cempmempoolused.is_set || is_set(cempmempoolused.operation)) leaf_name_data.push_back(cempmempoolused.get_name_leafdata());
    if (cempmempoolusedlowwatermark.is_set || is_set(cempmempoolusedlowwatermark.operation)) leaf_name_data.push_back(cempmempoolusedlowwatermark.get_name_leafdata());
    if (cempmempoolusedlowwatermarkovrflw.is_set || is_set(cempmempoolusedlowwatermarkovrflw.operation)) leaf_name_data.push_back(cempmempoolusedlowwatermarkovrflw.get_name_leafdata());
    if (cempmempoolusedovrflw.is_set || is_set(cempmempoolusedovrflw.operation)) leaf_name_data.push_back(cempmempoolusedovrflw.get_name_leafdata());
    if (cempmempoolvalid.is_set || is_set(cempmempoolvalid.operation)) leaf_name_data.push_back(cempmempoolvalid.get_name_leafdata());


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

void CiscoEnhancedMempoolMib::Cempmempooltable::Cempmempoolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cempMemPoolIndex")
    {
        cempmempoolindex = value;
    }
    if(value_path == "cempMemPoolAllocHit")
    {
        cempmempoolallochit = value;
    }
    if(value_path == "cempMemPoolAllocMiss")
    {
        cempmempoolallocmiss = value;
    }
    if(value_path == "cempMemPoolAlternate")
    {
        cempmempoolalternate = value;
    }
    if(value_path == "cempMemPoolFree")
    {
        cempmempoolfree = value;
    }
    if(value_path == "cempMemPoolFreeHit")
    {
        cempmempoolfreehit = value;
    }
    if(value_path == "cempMemPoolFreeMiss")
    {
        cempmempoolfreemiss = value;
    }
    if(value_path == "cempMemPoolFreeOvrflw")
    {
        cempmempoolfreeovrflw = value;
    }
    if(value_path == "cempMemPoolHCFree")
    {
        cempmempoolhcfree = value;
    }
    if(value_path == "cempMemPoolHCLargestFree")
    {
        cempmempoolhclargestfree = value;
    }
    if(value_path == "cempMemPoolHCLowestFree")
    {
        cempmempoolhclowestfree = value;
    }
    if(value_path == "cempMemPoolHCShared")
    {
        cempmempoolhcshared = value;
    }
    if(value_path == "cempMemPoolHCUsed")
    {
        cempmempoolhcused = value;
    }
    if(value_path == "cempMemPoolHCUsedLowWaterMark")
    {
        cempmempoolhcusedlowwatermark = value;
    }
    if(value_path == "cempMemPoolLargestFree")
    {
        cempmempoollargestfree = value;
    }
    if(value_path == "cempMemPoolLargestFreeOvrflw")
    {
        cempmempoollargestfreeovrflw = value;
    }
    if(value_path == "cempMemPoolLowestFree")
    {
        cempmempoollowestfree = value;
    }
    if(value_path == "cempMemPoolLowestFreeOvrflw")
    {
        cempmempoollowestfreeovrflw = value;
    }
    if(value_path == "cempMemPoolName")
    {
        cempmempoolname = value;
    }
    if(value_path == "cempMemPoolPlatformMemory")
    {
        cempmempoolplatformmemory = value;
    }
    if(value_path == "cempMemPoolShared")
    {
        cempmempoolshared = value;
    }
    if(value_path == "cempMemPoolSharedOvrflw")
    {
        cempmempoolsharedovrflw = value;
    }
    if(value_path == "cempMemPoolType")
    {
        cempmempooltype = value;
    }
    if(value_path == "cempMemPoolUsed")
    {
        cempmempoolused = value;
    }
    if(value_path == "cempMemPoolUsedLowWaterMark")
    {
        cempmempoolusedlowwatermark = value;
    }
    if(value_path == "cempMemPoolUsedLowWaterMarkOvrflw")
    {
        cempmempoolusedlowwatermarkovrflw = value;
    }
    if(value_path == "cempMemPoolUsedOvrflw")
    {
        cempmempoolusedovrflw = value;
    }
    if(value_path == "cempMemPoolValid")
    {
        cempmempoolvalid = value;
    }
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
    return is_set(operation);
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

void CiscoEnhancedMempoolMib::Cempmembufferpooltable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cempmembufferpoolindex.operation)
	|| is_set(cempmembufferdynamic.operation)
	|| is_set(cempmembufferfailures.operation)
	|| is_set(cempmembufferfree.operation)
	|| is_set(cempmembufferfreehit.operation)
	|| is_set(cempmembufferfreemiss.operation)
	|| is_set(cempmembuffergrow.operation)
	|| is_set(cempmembufferhit.operation)
	|| is_set(cempmembuffermax.operation)
	|| is_set(cempmembuffermempoolindex.operation)
	|| is_set(cempmembuffermin.operation)
	|| is_set(cempmembuffermiss.operation)
	|| is_set(cempmembuffername.operation)
	|| is_set(cempmembuffernostorage.operation)
	|| is_set(cempmembufferpeak.operation)
	|| is_set(cempmembufferpeaktime.operation)
	|| is_set(cempmembufferpermanent.operation)
	|| is_set(cempmembufferpermchange.operation)
	|| is_set(cempmembuffersize.operation)
	|| is_set(cempmembuffertotal.operation)
	|| is_set(cempmembuffertransient.operation)
	|| is_set(cempmembuffertrim.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cempmembufferpoolindex.is_set || is_set(cempmembufferpoolindex.operation)) leaf_name_data.push_back(cempmembufferpoolindex.get_name_leafdata());
    if (cempmembufferdynamic.is_set || is_set(cempmembufferdynamic.operation)) leaf_name_data.push_back(cempmembufferdynamic.get_name_leafdata());
    if (cempmembufferfailures.is_set || is_set(cempmembufferfailures.operation)) leaf_name_data.push_back(cempmembufferfailures.get_name_leafdata());
    if (cempmembufferfree.is_set || is_set(cempmembufferfree.operation)) leaf_name_data.push_back(cempmembufferfree.get_name_leafdata());
    if (cempmembufferfreehit.is_set || is_set(cempmembufferfreehit.operation)) leaf_name_data.push_back(cempmembufferfreehit.get_name_leafdata());
    if (cempmembufferfreemiss.is_set || is_set(cempmembufferfreemiss.operation)) leaf_name_data.push_back(cempmembufferfreemiss.get_name_leafdata());
    if (cempmembuffergrow.is_set || is_set(cempmembuffergrow.operation)) leaf_name_data.push_back(cempmembuffergrow.get_name_leafdata());
    if (cempmembufferhit.is_set || is_set(cempmembufferhit.operation)) leaf_name_data.push_back(cempmembufferhit.get_name_leafdata());
    if (cempmembuffermax.is_set || is_set(cempmembuffermax.operation)) leaf_name_data.push_back(cempmembuffermax.get_name_leafdata());
    if (cempmembuffermempoolindex.is_set || is_set(cempmembuffermempoolindex.operation)) leaf_name_data.push_back(cempmembuffermempoolindex.get_name_leafdata());
    if (cempmembuffermin.is_set || is_set(cempmembuffermin.operation)) leaf_name_data.push_back(cempmembuffermin.get_name_leafdata());
    if (cempmembuffermiss.is_set || is_set(cempmembuffermiss.operation)) leaf_name_data.push_back(cempmembuffermiss.get_name_leafdata());
    if (cempmembuffername.is_set || is_set(cempmembuffername.operation)) leaf_name_data.push_back(cempmembuffername.get_name_leafdata());
    if (cempmembuffernostorage.is_set || is_set(cempmembuffernostorage.operation)) leaf_name_data.push_back(cempmembuffernostorage.get_name_leafdata());
    if (cempmembufferpeak.is_set || is_set(cempmembufferpeak.operation)) leaf_name_data.push_back(cempmembufferpeak.get_name_leafdata());
    if (cempmembufferpeaktime.is_set || is_set(cempmembufferpeaktime.operation)) leaf_name_data.push_back(cempmembufferpeaktime.get_name_leafdata());
    if (cempmembufferpermanent.is_set || is_set(cempmembufferpermanent.operation)) leaf_name_data.push_back(cempmembufferpermanent.get_name_leafdata());
    if (cempmembufferpermchange.is_set || is_set(cempmembufferpermchange.operation)) leaf_name_data.push_back(cempmembufferpermchange.get_name_leafdata());
    if (cempmembuffersize.is_set || is_set(cempmembuffersize.operation)) leaf_name_data.push_back(cempmembuffersize.get_name_leafdata());
    if (cempmembuffertotal.is_set || is_set(cempmembuffertotal.operation)) leaf_name_data.push_back(cempmembuffertotal.get_name_leafdata());
    if (cempmembuffertransient.is_set || is_set(cempmembuffertransient.operation)) leaf_name_data.push_back(cempmembuffertransient.get_name_leafdata());
    if (cempmembuffertrim.is_set || is_set(cempmembuffertrim.operation)) leaf_name_data.push_back(cempmembuffertrim.get_name_leafdata());


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

void CiscoEnhancedMempoolMib::Cempmembufferpooltable::Cempmembufferpoolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cempMemBufferPoolIndex")
    {
        cempmembufferpoolindex = value;
    }
    if(value_path == "cempMemBufferDynamic")
    {
        cempmembufferdynamic = value;
    }
    if(value_path == "cempMemBufferFailures")
    {
        cempmembufferfailures = value;
    }
    if(value_path == "cempMemBufferFree")
    {
        cempmembufferfree = value;
    }
    if(value_path == "cempMemBufferFreeHit")
    {
        cempmembufferfreehit = value;
    }
    if(value_path == "cempMemBufferFreeMiss")
    {
        cempmembufferfreemiss = value;
    }
    if(value_path == "cempMemBufferGrow")
    {
        cempmembuffergrow = value;
    }
    if(value_path == "cempMemBufferHit")
    {
        cempmembufferhit = value;
    }
    if(value_path == "cempMemBufferMax")
    {
        cempmembuffermax = value;
    }
    if(value_path == "cempMemBufferMemPoolIndex")
    {
        cempmembuffermempoolindex = value;
    }
    if(value_path == "cempMemBufferMin")
    {
        cempmembuffermin = value;
    }
    if(value_path == "cempMemBufferMiss")
    {
        cempmembuffermiss = value;
    }
    if(value_path == "cempMemBufferName")
    {
        cempmembuffername = value;
    }
    if(value_path == "cempMemBufferNoStorage")
    {
        cempmembuffernostorage = value;
    }
    if(value_path == "cempMemBufferPeak")
    {
        cempmembufferpeak = value;
    }
    if(value_path == "cempMemBufferPeakTime")
    {
        cempmembufferpeaktime = value;
    }
    if(value_path == "cempMemBufferPermanent")
    {
        cempmembufferpermanent = value;
    }
    if(value_path == "cempMemBufferPermChange")
    {
        cempmembufferpermchange = value;
    }
    if(value_path == "cempMemBufferSize")
    {
        cempmembuffersize = value;
    }
    if(value_path == "cempMemBufferTotal")
    {
        cempmembuffertotal = value;
    }
    if(value_path == "cempMemBufferTransient")
    {
        cempmembuffertransient = value;
    }
    if(value_path == "cempMemBufferTrim")
    {
        cempmembuffertrim = value;
    }
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
    return is_set(operation);
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

void CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cempmembufferpoolindex.operation)
	|| is_set(cempmembuffercachehit.operation)
	|| is_set(cempmembuffercachemiss.operation)
	|| is_set(cempmembuffercachesize.operation)
	|| is_set(cempmembuffercachethreshold.operation)
	|| is_set(cempmembuffercachethresholdcount.operation)
	|| is_set(cempmembuffercachetotal.operation)
	|| is_set(cempmembuffercacheused.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cempmembufferpoolindex.is_set || is_set(cempmembufferpoolindex.operation)) leaf_name_data.push_back(cempmembufferpoolindex.get_name_leafdata());
    if (cempmembuffercachehit.is_set || is_set(cempmembuffercachehit.operation)) leaf_name_data.push_back(cempmembuffercachehit.get_name_leafdata());
    if (cempmembuffercachemiss.is_set || is_set(cempmembuffercachemiss.operation)) leaf_name_data.push_back(cempmembuffercachemiss.get_name_leafdata());
    if (cempmembuffercachesize.is_set || is_set(cempmembuffercachesize.operation)) leaf_name_data.push_back(cempmembuffercachesize.get_name_leafdata());
    if (cempmembuffercachethreshold.is_set || is_set(cempmembuffercachethreshold.operation)) leaf_name_data.push_back(cempmembuffercachethreshold.get_name_leafdata());
    if (cempmembuffercachethresholdcount.is_set || is_set(cempmembuffercachethresholdcount.operation)) leaf_name_data.push_back(cempmembuffercachethresholdcount.get_name_leafdata());
    if (cempmembuffercachetotal.is_set || is_set(cempmembuffercachetotal.operation)) leaf_name_data.push_back(cempmembuffercachetotal.get_name_leafdata());
    if (cempmembuffercacheused.is_set || is_set(cempmembuffercacheused.operation)) leaf_name_data.push_back(cempmembuffercacheused.get_name_leafdata());


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

void CiscoEnhancedMempoolMib::Cempmembuffercachepooltable::Cempmembuffercachepoolentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cempMemBufferPoolIndex")
    {
        cempmembufferpoolindex = value;
    }
    if(value_path == "cempMemBufferCacheHit")
    {
        cempmembuffercachehit = value;
    }
    if(value_path == "cempMemBufferCacheMiss")
    {
        cempmembuffercachemiss = value;
    }
    if(value_path == "cempMemBufferCacheSize")
    {
        cempmembuffercachesize = value;
    }
    if(value_path == "cempMemBufferCacheThreshold")
    {
        cempmembuffercachethreshold = value;
    }
    if(value_path == "cempMemBufferCacheThresholdCount")
    {
        cempmembuffercachethresholdcount = value;
    }
    if(value_path == "cempMemBufferCacheTotal")
    {
        cempmembuffercachetotal = value;
    }
    if(value_path == "cempMemBufferCacheUsed")
    {
        cempmembuffercacheused = value;
    }
}

const Enum::YLeaf CempmempooltypesEnum::other {1, "other"};
const Enum::YLeaf CempmempooltypesEnum::processorMemory {2, "processorMemory"};
const Enum::YLeaf CempmempooltypesEnum::ioMemory {3, "ioMemory"};
const Enum::YLeaf CempmempooltypesEnum::pciMemory {4, "pciMemory"};
const Enum::YLeaf CempmempooltypesEnum::fastMemory {5, "fastMemory"};
const Enum::YLeaf CempmempooltypesEnum::multibusMemory {6, "multibusMemory"};
const Enum::YLeaf CempmempooltypesEnum::interruptStackMemory {7, "interruptStackMemory"};
const Enum::YLeaf CempmempooltypesEnum::processStackMemory {8, "processStackMemory"};
const Enum::YLeaf CempmempooltypesEnum::localExceptionMemory {9, "localExceptionMemory"};
const Enum::YLeaf CempmempooltypesEnum::virtualMemory {10, "virtualMemory"};
const Enum::YLeaf CempmempooltypesEnum::reservedMemory {11, "reservedMemory"};
const Enum::YLeaf CempmempooltypesEnum::imageMemory {12, "imageMemory"};
const Enum::YLeaf CempmempooltypesEnum::asicMemory {13, "asicMemory"};
const Enum::YLeaf CempmempooltypesEnum::posixMemory {14, "posixMemory"};


}
}

