
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ENTITY_EXT_MIB.hpp"

namespace ydk {
namespace CISCO_ENTITY_EXT_MIB {

CiscoEntityExtMib::CiscoEntityExtMib()
    :
    ceextconfigregtable(std::make_shared<CiscoEntityExtMib::Ceextconfigregtable>())
	,ceextentityledtable(std::make_shared<CiscoEntityExtMib::Ceextentityledtable>())
	,ceextphysicalprocessortable(std::make_shared<CiscoEntityExtMib::Ceextphysicalprocessortable>())
{
    ceextconfigregtable->parent = this;

    ceextentityledtable->parent = this;

    ceextphysicalprocessortable->parent = this;

    yang_name = "CISCO-ENTITY-EXT-MIB"; yang_parent_name = "CISCO-ENTITY-EXT-MIB";
}

CiscoEntityExtMib::~CiscoEntityExtMib()
{
}

bool CiscoEntityExtMib::has_data() const
{
    return (ceextconfigregtable !=  nullptr && ceextconfigregtable->has_data())
	|| (ceextentityledtable !=  nullptr && ceextentityledtable->has_data())
	|| (ceextphysicalprocessortable !=  nullptr && ceextphysicalprocessortable->has_data());
}

bool CiscoEntityExtMib::has_operation() const
{
    return is_set(operation)
	|| (ceextconfigregtable !=  nullptr && ceextconfigregtable->has_operation())
	|| (ceextentityledtable !=  nullptr && ceextentityledtable->has_operation())
	|| (ceextphysicalprocessortable !=  nullptr && ceextphysicalprocessortable->has_operation());
}

std::string CiscoEntityExtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB";

    return path_buffer.str();

}

const EntityPath CiscoEntityExtMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoEntityExtMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtConfigRegTable")
    {
        if(ceextconfigregtable == nullptr)
        {
            ceextconfigregtable = std::make_shared<CiscoEntityExtMib::Ceextconfigregtable>();
        }
        return ceextconfigregtable;
    }

    if(child_yang_name == "ceExtEntityLEDTable")
    {
        if(ceextentityledtable == nullptr)
        {
            ceextentityledtable = std::make_shared<CiscoEntityExtMib::Ceextentityledtable>();
        }
        return ceextentityledtable;
    }

    if(child_yang_name == "ceExtPhysicalProcessorTable")
    {
        if(ceextphysicalprocessortable == nullptr)
        {
            ceextphysicalprocessortable = std::make_shared<CiscoEntityExtMib::Ceextphysicalprocessortable>();
        }
        return ceextphysicalprocessortable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityExtMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ceextconfigregtable != nullptr)
    {
        children["ceExtConfigRegTable"] = ceextconfigregtable;
    }

    if(ceextentityledtable != nullptr)
    {
        children["ceExtEntityLEDTable"] = ceextentityledtable;
    }

    if(ceextphysicalprocessortable != nullptr)
    {
        children["ceExtPhysicalProcessorTable"] = ceextphysicalprocessortable;
    }

    return children;
}

void CiscoEntityExtMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoEntityExtMib::clone_ptr() const
{
    return std::make_shared<CiscoEntityExtMib>();
}

std::string CiscoEntityExtMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoEntityExtMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoEntityExtMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessortable()
{
    yang_name = "ceExtPhysicalProcessorTable"; yang_parent_name = "CISCO-ENTITY-EXT-MIB";
}

CiscoEntityExtMib::Ceextphysicalprocessortable::~Ceextphysicalprocessortable()
{
}

bool CiscoEntityExtMib::Ceextphysicalprocessortable::has_data() const
{
    for (std::size_t index=0; index<ceextphysicalprocessorentry.size(); index++)
    {
        if(ceextphysicalprocessorentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityExtMib::Ceextphysicalprocessortable::has_operation() const
{
    for (std::size_t index=0; index<ceextphysicalprocessorentry.size(); index++)
    {
        if(ceextphysicalprocessorentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityExtMib::Ceextphysicalprocessortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtPhysicalProcessorTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityExtMib::Ceextphysicalprocessortable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityExtMib::Ceextphysicalprocessortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtPhysicalProcessorEntry")
    {
        for(auto const & c : ceextphysicalprocessorentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry>();
        c->parent = this;
        ceextphysicalprocessorentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityExtMib::Ceextphysicalprocessortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceextphysicalprocessorentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityExtMib::Ceextphysicalprocessortable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::Ceextphysicalprocessorentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceexthcprocessorram{YType::uint64, "ceExtHCProcessorRam"},
    ceextnvramsize{YType::uint32, "ceExtNVRAMSize"},
    ceextnvramused{YType::uint32, "ceExtNVRAMUsed"},
    ceextprocessorram{YType::uint32, "ceExtProcessorRam"},
    ceextprocessorramoverflow{YType::uint32, "ceExtProcessorRamOverflow"}
{
    yang_name = "ceExtPhysicalProcessorEntry"; yang_parent_name = "ceExtPhysicalProcessorTable";
}

CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::~Ceextphysicalprocessorentry()
{
}

bool CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceexthcprocessorram.is_set
	|| ceextnvramsize.is_set
	|| ceextnvramused.is_set
	|| ceextprocessorram.is_set
	|| ceextprocessorramoverflow.is_set;
}

bool CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceexthcprocessorram.operation)
	|| is_set(ceextnvramsize.operation)
	|| is_set(ceextnvramused.operation)
	|| is_set(ceextprocessorram.operation)
	|| is_set(ceextprocessorramoverflow.operation);
}

std::string CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtPhysicalProcessorEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/ceExtPhysicalProcessorTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceexthcprocessorram.is_set || is_set(ceexthcprocessorram.operation)) leaf_name_data.push_back(ceexthcprocessorram.get_name_leafdata());
    if (ceextnvramsize.is_set || is_set(ceextnvramsize.operation)) leaf_name_data.push_back(ceextnvramsize.get_name_leafdata());
    if (ceextnvramused.is_set || is_set(ceextnvramused.operation)) leaf_name_data.push_back(ceextnvramused.get_name_leafdata());
    if (ceextprocessorram.is_set || is_set(ceextprocessorram.operation)) leaf_name_data.push_back(ceextprocessorram.get_name_leafdata());
    if (ceextprocessorramoverflow.is_set || is_set(ceextprocessorramoverflow.operation)) leaf_name_data.push_back(ceextprocessorramoverflow.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityExtMib::Ceextphysicalprocessortable::Ceextphysicalprocessorentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "ceExtHCProcessorRam")
    {
        ceexthcprocessorram = value;
    }
    if(value_path == "ceExtNVRAMSize")
    {
        ceextnvramsize = value;
    }
    if(value_path == "ceExtNVRAMUsed")
    {
        ceextnvramused = value;
    }
    if(value_path == "ceExtProcessorRam")
    {
        ceextprocessorram = value;
    }
    if(value_path == "ceExtProcessorRamOverflow")
    {
        ceextprocessorramoverflow = value;
    }
}

CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregtable()
{
    yang_name = "ceExtConfigRegTable"; yang_parent_name = "CISCO-ENTITY-EXT-MIB";
}

CiscoEntityExtMib::Ceextconfigregtable::~Ceextconfigregtable()
{
}

bool CiscoEntityExtMib::Ceextconfigregtable::has_data() const
{
    for (std::size_t index=0; index<ceextconfigregentry.size(); index++)
    {
        if(ceextconfigregentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityExtMib::Ceextconfigregtable::has_operation() const
{
    for (std::size_t index=0; index<ceextconfigregentry.size(); index++)
    {
        if(ceextconfigregentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityExtMib::Ceextconfigregtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtConfigRegTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityExtMib::Ceextconfigregtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityExtMib::Ceextconfigregtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtConfigRegEntry")
    {
        for(auto const & c : ceextconfigregentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry>();
        c->parent = this;
        ceextconfigregentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityExtMib::Ceextconfigregtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceextconfigregentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityExtMib::Ceextconfigregtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry::Ceextconfigregentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceextconfigregister{YType::str, "ceExtConfigRegister"},
    ceextconfigregnext{YType::str, "ceExtConfigRegNext"},
    ceextkickstartimagelist{YType::str, "ceExtKickstartImageList"},
    ceextsysbootimagelist{YType::str, "ceExtSysBootImageList"}
{
    yang_name = "ceExtConfigRegEntry"; yang_parent_name = "ceExtConfigRegTable";
}

CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry::~Ceextconfigregentry()
{
}

bool CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceextconfigregister.is_set
	|| ceextconfigregnext.is_set
	|| ceextkickstartimagelist.is_set
	|| ceextsysbootimagelist.is_set;
}

bool CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceextconfigregister.operation)
	|| is_set(ceextconfigregnext.operation)
	|| is_set(ceextkickstartimagelist.operation)
	|| is_set(ceextsysbootimagelist.operation);
}

std::string CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtConfigRegEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/ceExtConfigRegTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceextconfigregister.is_set || is_set(ceextconfigregister.operation)) leaf_name_data.push_back(ceextconfigregister.get_name_leafdata());
    if (ceextconfigregnext.is_set || is_set(ceextconfigregnext.operation)) leaf_name_data.push_back(ceextconfigregnext.get_name_leafdata());
    if (ceextkickstartimagelist.is_set || is_set(ceextkickstartimagelist.operation)) leaf_name_data.push_back(ceextkickstartimagelist.get_name_leafdata());
    if (ceextsysbootimagelist.is_set || is_set(ceextsysbootimagelist.operation)) leaf_name_data.push_back(ceextsysbootimagelist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityExtMib::Ceextconfigregtable::Ceextconfigregentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "ceExtConfigRegister")
    {
        ceextconfigregister = value;
    }
    if(value_path == "ceExtConfigRegNext")
    {
        ceextconfigregnext = value;
    }
    if(value_path == "ceExtKickstartImageList")
    {
        ceextkickstartimagelist = value;
    }
    if(value_path == "ceExtSysBootImageList")
    {
        ceextsysbootimagelist = value;
    }
}

CiscoEntityExtMib::Ceextentityledtable::Ceextentityledtable()
{
    yang_name = "ceExtEntityLEDTable"; yang_parent_name = "CISCO-ENTITY-EXT-MIB";
}

CiscoEntityExtMib::Ceextentityledtable::~Ceextentityledtable()
{
}

bool CiscoEntityExtMib::Ceextentityledtable::has_data() const
{
    for (std::size_t index=0; index<ceextentityledentry.size(); index++)
    {
        if(ceextentityledentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoEntityExtMib::Ceextentityledtable::has_operation() const
{
    for (std::size_t index=0; index<ceextentityledentry.size(); index++)
    {
        if(ceextentityledentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoEntityExtMib::Ceextentityledtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtEntityLEDTable";

    return path_buffer.str();

}

const EntityPath CiscoEntityExtMib::Ceextentityledtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityExtMib::Ceextentityledtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceExtEntityLEDEntry")
    {
        for(auto const & c : ceextentityledentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry>();
        c->parent = this;
        ceextentityledentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityExtMib::Ceextentityledtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceextentityledentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoEntityExtMib::Ceextentityledtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::Ceextentityledentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceextentityledtype{YType::enumeration, "ceExtEntityLEDType"},
    ceextentityledcolor{YType::enumeration, "ceExtEntityLEDColor"}
{
    yang_name = "ceExtEntityLEDEntry"; yang_parent_name = "ceExtEntityLEDTable";
}

CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::~Ceextentityledentry()
{
}

bool CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceextentityledtype.is_set
	|| ceextentityledcolor.is_set;
}

bool CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceextentityledtype.operation)
	|| is_set(ceextentityledcolor.operation);
}

std::string CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceExtEntityLEDEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[ceExtEntityLEDType='" <<ceextentityledtype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ENTITY-EXT-MIB:CISCO-ENTITY-EXT-MIB/ceExtEntityLEDTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceextentityledtype.is_set || is_set(ceextentityledtype.operation)) leaf_name_data.push_back(ceextentityledtype.get_name_leafdata());
    if (ceextentityledcolor.is_set || is_set(ceextentityledcolor.operation)) leaf_name_data.push_back(ceextentityledcolor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "ceExtEntityLEDType")
    {
        ceextentityledtype = value;
    }
    if(value_path == "ceExtEntityLEDColor")
    {
        ceextentityledcolor = value;
    }
}

const Enum::YLeaf CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledtypeEnum::status {1, "status"};
const Enum::YLeaf CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledtypeEnum::system {2, "system"};
const Enum::YLeaf CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledtypeEnum::active {3, "active"};
const Enum::YLeaf CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledtypeEnum::power {4, "power"};
const Enum::YLeaf CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledtypeEnum::battery {5, "battery"};

const Enum::YLeaf CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledcolorEnum::off {1, "off"};
const Enum::YLeaf CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledcolorEnum::green {2, "green"};
const Enum::YLeaf CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledcolorEnum::amber {3, "amber"};
const Enum::YLeaf CiscoEntityExtMib::Ceextentityledtable::Ceextentityledentry::CeextentityledcolorEnum::red {4, "red"};


}
}

