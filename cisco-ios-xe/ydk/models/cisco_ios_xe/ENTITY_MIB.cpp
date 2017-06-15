
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ENTITY_MIB.hpp"

namespace ydk {
namespace ENTITY_MIB {

EntityMib::EntityMib()
    :
    entaliasmappingtable_(std::make_shared<EntityMib::Entaliasmappingtable>())
	,entitygeneral_(std::make_shared<EntityMib::Entitygeneral>())
	,entlogicaltable_(std::make_shared<EntityMib::Entlogicaltable>())
	,entlpmappingtable_(std::make_shared<EntityMib::Entlpmappingtable>())
	,entphysicalcontainstable_(std::make_shared<EntityMib::Entphysicalcontainstable>())
	,entphysicaltable_(std::make_shared<EntityMib::Entphysicaltable>())
{
    entaliasmappingtable_->parent = this;

    entitygeneral_->parent = this;

    entlogicaltable_->parent = this;

    entlpmappingtable_->parent = this;

    entphysicalcontainstable_->parent = this;

    entphysicaltable_->parent = this;

    yang_name = "ENTITY-MIB"; yang_parent_name = "ENTITY-MIB";
}

EntityMib::~EntityMib()
{
}

bool EntityMib::has_data() const
{
    return (entaliasmappingtable_ !=  nullptr && entaliasmappingtable_->has_data())
	|| (entitygeneral_ !=  nullptr && entitygeneral_->has_data())
	|| (entlogicaltable_ !=  nullptr && entlogicaltable_->has_data())
	|| (entlpmappingtable_ !=  nullptr && entlpmappingtable_->has_data())
	|| (entphysicalcontainstable_ !=  nullptr && entphysicalcontainstable_->has_data())
	|| (entphysicaltable_ !=  nullptr && entphysicaltable_->has_data());
}

bool EntityMib::has_operation() const
{
    return is_set(operation)
	|| (entaliasmappingtable_ !=  nullptr && entaliasmappingtable_->has_operation())
	|| (entitygeneral_ !=  nullptr && entitygeneral_->has_operation())
	|| (entlogicaltable_ !=  nullptr && entlogicaltable_->has_operation())
	|| (entlpmappingtable_ !=  nullptr && entlpmappingtable_->has_operation())
	|| (entphysicalcontainstable_ !=  nullptr && entphysicalcontainstable_->has_operation())
	|| (entphysicaltable_ !=  nullptr && entphysicaltable_->has_operation());
}

std::string EntityMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ENTITY-MIB:ENTITY-MIB";

    return path_buffer.str();

}

const EntityPath EntityMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EntityMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entAliasMappingTable")
    {
        if(entaliasmappingtable_ == nullptr)
        {
            entaliasmappingtable_ = std::make_shared<EntityMib::Entaliasmappingtable>();
        }
        return entaliasmappingtable_;
    }

    if(child_yang_name == "entityGeneral")
    {
        if(entitygeneral_ == nullptr)
        {
            entitygeneral_ = std::make_shared<EntityMib::Entitygeneral>();
        }
        return entitygeneral_;
    }

    if(child_yang_name == "entLogicalTable")
    {
        if(entlogicaltable_ == nullptr)
        {
            entlogicaltable_ = std::make_shared<EntityMib::Entlogicaltable>();
        }
        return entlogicaltable_;
    }

    if(child_yang_name == "entLPMappingTable")
    {
        if(entlpmappingtable_ == nullptr)
        {
            entlpmappingtable_ = std::make_shared<EntityMib::Entlpmappingtable>();
        }
        return entlpmappingtable_;
    }

    if(child_yang_name == "entPhysicalContainsTable")
    {
        if(entphysicalcontainstable_ == nullptr)
        {
            entphysicalcontainstable_ = std::make_shared<EntityMib::Entphysicalcontainstable>();
        }
        return entphysicalcontainstable_;
    }

    if(child_yang_name == "entPhysicalTable")
    {
        if(entphysicaltable_ == nullptr)
        {
            entphysicaltable_ = std::make_shared<EntityMib::Entphysicaltable>();
        }
        return entphysicaltable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entaliasmappingtable_ != nullptr)
    {
        children["entAliasMappingTable"] = entaliasmappingtable_;
    }

    if(entitygeneral_ != nullptr)
    {
        children["entityGeneral"] = entitygeneral_;
    }

    if(entlogicaltable_ != nullptr)
    {
        children["entLogicalTable"] = entlogicaltable_;
    }

    if(entlpmappingtable_ != nullptr)
    {
        children["entLPMappingTable"] = entlpmappingtable_;
    }

    if(entphysicalcontainstable_ != nullptr)
    {
        children["entPhysicalContainsTable"] = entphysicalcontainstable_;
    }

    if(entphysicaltable_ != nullptr)
    {
        children["entPhysicalTable"] = entphysicaltable_;
    }

    return children;
}

void EntityMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> EntityMib::clone_ptr() const
{
    return std::make_shared<EntityMib>();
}

std::string EntityMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EntityMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EntityMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

EntityMib::Entitygeneral::Entitygeneral()
    :
    entlastchangetime{YType::uint32, "entLastChangeTime"}
{
    yang_name = "entityGeneral"; yang_parent_name = "ENTITY-MIB";
}

EntityMib::Entitygeneral::~Entitygeneral()
{
}

bool EntityMib::Entitygeneral::has_data() const
{
    return entlastchangetime.is_set;
}

bool EntityMib::Entitygeneral::has_operation() const
{
    return is_set(operation)
	|| is_set(entlastchangetime.operation);
}

std::string EntityMib::Entitygeneral::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entityGeneral";

    return path_buffer.str();

}

const EntityPath EntityMib::Entitygeneral::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entlastchangetime.is_set || is_set(entlastchangetime.operation)) leaf_name_data.push_back(entlastchangetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entitygeneral::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entitygeneral::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityMib::Entitygeneral::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entLastChangeTime")
    {
        entlastchangetime = value;
    }
}

EntityMib::Entphysicaltable::Entphysicaltable()
{
    yang_name = "entPhysicalTable"; yang_parent_name = "ENTITY-MIB";
}

EntityMib::Entphysicaltable::~Entphysicaltable()
{
}

bool EntityMib::Entphysicaltable::has_data() const
{
    for (std::size_t index=0; index<entphysicalentry_.size(); index++)
    {
        if(entphysicalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EntityMib::Entphysicaltable::has_operation() const
{
    for (std::size_t index=0; index<entphysicalentry_.size(); index++)
    {
        if(entphysicalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EntityMib::Entphysicaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalTable";

    return path_buffer.str();

}

const EntityPath EntityMib::Entphysicaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entphysicaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entPhysicalEntry")
    {
        for(auto const & c : entphysicalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EntityMib::Entphysicaltable::Entphysicalentry>();
        c->parent = this;
        entphysicalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entphysicaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entphysicalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EntityMib::Entphysicaltable::set_value(const std::string & value_path, std::string value)
{
}

EntityMib::Entphysicaltable::Entphysicalentry::Entphysicalentry()
    :
    entphysicalindex{YType::int32, "entPhysicalIndex"},
    ceentphysicalsecondserialnum{YType::str, "CISCO-ENTITY-EXT-MIB:ceEntPhysicalSecondSerialNum"},
    entphysicalalias{YType::str, "entPhysicalAlias"},
    entphysicalassetid{YType::str, "entPhysicalAssetID"},
    entphysicalclass{YType::enumeration, "entPhysicalClass"},
    entphysicalcontainedin{YType::int32, "entPhysicalContainedIn"},
    entphysicaldescr{YType::str, "entPhysicalDescr"},
    entphysicalfirmwarerev{YType::str, "entPhysicalFirmwareRev"},
    entphysicalhardwarerev{YType::str, "entPhysicalHardwareRev"},
    entphysicalisfru{YType::boolean, "entPhysicalIsFRU"},
    entphysicalmfgdate{YType::str, "entPhysicalMfgDate"},
    entphysicalmfgname{YType::str, "entPhysicalMfgName"},
    entphysicalmodelname{YType::str, "entPhysicalModelName"},
    entphysicalname{YType::str, "entPhysicalName"},
    entphysicalparentrelpos{YType::int32, "entPhysicalParentRelPos"},
    entphysicalserialnum{YType::str, "entPhysicalSerialNum"},
    entphysicalsoftwarerev{YType::str, "entPhysicalSoftwareRev"},
    entphysicaluris{YType::str, "entPhysicalUris"},
    entphysicalvendortype{YType::str, "entPhysicalVendorType"}
{
    yang_name = "entPhysicalEntry"; yang_parent_name = "entPhysicalTable";
}

EntityMib::Entphysicaltable::Entphysicalentry::~Entphysicalentry()
{
}

bool EntityMib::Entphysicaltable::Entphysicalentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceentphysicalsecondserialnum.is_set
	|| entphysicalalias.is_set
	|| entphysicalassetid.is_set
	|| entphysicalclass.is_set
	|| entphysicalcontainedin.is_set
	|| entphysicaldescr.is_set
	|| entphysicalfirmwarerev.is_set
	|| entphysicalhardwarerev.is_set
	|| entphysicalisfru.is_set
	|| entphysicalmfgdate.is_set
	|| entphysicalmfgname.is_set
	|| entphysicalmodelname.is_set
	|| entphysicalname.is_set
	|| entphysicalparentrelpos.is_set
	|| entphysicalserialnum.is_set
	|| entphysicalsoftwarerev.is_set
	|| entphysicaluris.is_set
	|| entphysicalvendortype.is_set;
}

bool EntityMib::Entphysicaltable::Entphysicalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceentphysicalsecondserialnum.operation)
	|| is_set(entphysicalalias.operation)
	|| is_set(entphysicalassetid.operation)
	|| is_set(entphysicalclass.operation)
	|| is_set(entphysicalcontainedin.operation)
	|| is_set(entphysicaldescr.operation)
	|| is_set(entphysicalfirmwarerev.operation)
	|| is_set(entphysicalhardwarerev.operation)
	|| is_set(entphysicalisfru.operation)
	|| is_set(entphysicalmfgdate.operation)
	|| is_set(entphysicalmfgname.operation)
	|| is_set(entphysicalmodelname.operation)
	|| is_set(entphysicalname.operation)
	|| is_set(entphysicalparentrelpos.operation)
	|| is_set(entphysicalserialnum.operation)
	|| is_set(entphysicalsoftwarerev.operation)
	|| is_set(entphysicaluris.operation)
	|| is_set(entphysicalvendortype.operation);
}

std::string EntityMib::Entphysicaltable::Entphysicalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath EntityMib::Entphysicaltable::Entphysicalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/entPhysicalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceentphysicalsecondserialnum.is_set || is_set(ceentphysicalsecondserialnum.operation)) leaf_name_data.push_back(ceentphysicalsecondserialnum.get_name_leafdata());
    if (entphysicalalias.is_set || is_set(entphysicalalias.operation)) leaf_name_data.push_back(entphysicalalias.get_name_leafdata());
    if (entphysicalassetid.is_set || is_set(entphysicalassetid.operation)) leaf_name_data.push_back(entphysicalassetid.get_name_leafdata());
    if (entphysicalclass.is_set || is_set(entphysicalclass.operation)) leaf_name_data.push_back(entphysicalclass.get_name_leafdata());
    if (entphysicalcontainedin.is_set || is_set(entphysicalcontainedin.operation)) leaf_name_data.push_back(entphysicalcontainedin.get_name_leafdata());
    if (entphysicaldescr.is_set || is_set(entphysicaldescr.operation)) leaf_name_data.push_back(entphysicaldescr.get_name_leafdata());
    if (entphysicalfirmwarerev.is_set || is_set(entphysicalfirmwarerev.operation)) leaf_name_data.push_back(entphysicalfirmwarerev.get_name_leafdata());
    if (entphysicalhardwarerev.is_set || is_set(entphysicalhardwarerev.operation)) leaf_name_data.push_back(entphysicalhardwarerev.get_name_leafdata());
    if (entphysicalisfru.is_set || is_set(entphysicalisfru.operation)) leaf_name_data.push_back(entphysicalisfru.get_name_leafdata());
    if (entphysicalmfgdate.is_set || is_set(entphysicalmfgdate.operation)) leaf_name_data.push_back(entphysicalmfgdate.get_name_leafdata());
    if (entphysicalmfgname.is_set || is_set(entphysicalmfgname.operation)) leaf_name_data.push_back(entphysicalmfgname.get_name_leafdata());
    if (entphysicalmodelname.is_set || is_set(entphysicalmodelname.operation)) leaf_name_data.push_back(entphysicalmodelname.get_name_leafdata());
    if (entphysicalname.is_set || is_set(entphysicalname.operation)) leaf_name_data.push_back(entphysicalname.get_name_leafdata());
    if (entphysicalparentrelpos.is_set || is_set(entphysicalparentrelpos.operation)) leaf_name_data.push_back(entphysicalparentrelpos.get_name_leafdata());
    if (entphysicalserialnum.is_set || is_set(entphysicalserialnum.operation)) leaf_name_data.push_back(entphysicalserialnum.get_name_leafdata());
    if (entphysicalsoftwarerev.is_set || is_set(entphysicalsoftwarerev.operation)) leaf_name_data.push_back(entphysicalsoftwarerev.get_name_leafdata());
    if (entphysicaluris.is_set || is_set(entphysicaluris.operation)) leaf_name_data.push_back(entphysicaluris.get_name_leafdata());
    if (entphysicalvendortype.is_set || is_set(entphysicalvendortype.operation)) leaf_name_data.push_back(entphysicalvendortype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entphysicaltable::Entphysicalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entphysicaltable::Entphysicalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityMib::Entphysicaltable::Entphysicalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "ceEntPhysicalSecondSerialNum")
    {
        ceentphysicalsecondserialnum = value;
    }
    if(value_path == "entPhysicalAlias")
    {
        entphysicalalias = value;
    }
    if(value_path == "entPhysicalAssetID")
    {
        entphysicalassetid = value;
    }
    if(value_path == "entPhysicalClass")
    {
        entphysicalclass = value;
    }
    if(value_path == "entPhysicalContainedIn")
    {
        entphysicalcontainedin = value;
    }
    if(value_path == "entPhysicalDescr")
    {
        entphysicaldescr = value;
    }
    if(value_path == "entPhysicalFirmwareRev")
    {
        entphysicalfirmwarerev = value;
    }
    if(value_path == "entPhysicalHardwareRev")
    {
        entphysicalhardwarerev = value;
    }
    if(value_path == "entPhysicalIsFRU")
    {
        entphysicalisfru = value;
    }
    if(value_path == "entPhysicalMfgDate")
    {
        entphysicalmfgdate = value;
    }
    if(value_path == "entPhysicalMfgName")
    {
        entphysicalmfgname = value;
    }
    if(value_path == "entPhysicalModelName")
    {
        entphysicalmodelname = value;
    }
    if(value_path == "entPhysicalName")
    {
        entphysicalname = value;
    }
    if(value_path == "entPhysicalParentRelPos")
    {
        entphysicalparentrelpos = value;
    }
    if(value_path == "entPhysicalSerialNum")
    {
        entphysicalserialnum = value;
    }
    if(value_path == "entPhysicalSoftwareRev")
    {
        entphysicalsoftwarerev = value;
    }
    if(value_path == "entPhysicalUris")
    {
        entphysicaluris = value;
    }
    if(value_path == "entPhysicalVendorType")
    {
        entphysicalvendortype = value;
    }
}

EntityMib::Entlogicaltable::Entlogicaltable()
{
    yang_name = "entLogicalTable"; yang_parent_name = "ENTITY-MIB";
}

EntityMib::Entlogicaltable::~Entlogicaltable()
{
}

bool EntityMib::Entlogicaltable::has_data() const
{
    for (std::size_t index=0; index<entlogicalentry_.size(); index++)
    {
        if(entlogicalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EntityMib::Entlogicaltable::has_operation() const
{
    for (std::size_t index=0; index<entlogicalentry_.size(); index++)
    {
        if(entlogicalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EntityMib::Entlogicaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLogicalTable";

    return path_buffer.str();

}

const EntityPath EntityMib::Entlogicaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entlogicaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entLogicalEntry")
    {
        for(auto const & c : entlogicalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EntityMib::Entlogicaltable::Entlogicalentry>();
        c->parent = this;
        entlogicalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entlogicaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entlogicalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EntityMib::Entlogicaltable::set_value(const std::string & value_path, std::string value)
{
}

EntityMib::Entlogicaltable::Entlogicalentry::Entlogicalentry()
    :
    entlogicalindex{YType::int32, "entLogicalIndex"},
    entlogicalcommunity{YType::str, "entLogicalCommunity"},
    entlogicalcontextengineid{YType::str, "entLogicalContextEngineID"},
    entlogicalcontextname{YType::str, "entLogicalContextName"},
    entlogicaldescr{YType::str, "entLogicalDescr"},
    entlogicaltaddress{YType::str, "entLogicalTAddress"},
    entlogicaltdomain{YType::str, "entLogicalTDomain"},
    entlogicaltype{YType::str, "entLogicalType"}
{
    yang_name = "entLogicalEntry"; yang_parent_name = "entLogicalTable";
}

EntityMib::Entlogicaltable::Entlogicalentry::~Entlogicalentry()
{
}

bool EntityMib::Entlogicaltable::Entlogicalentry::has_data() const
{
    return entlogicalindex.is_set
	|| entlogicalcommunity.is_set
	|| entlogicalcontextengineid.is_set
	|| entlogicalcontextname.is_set
	|| entlogicaldescr.is_set
	|| entlogicaltaddress.is_set
	|| entlogicaltdomain.is_set
	|| entlogicaltype.is_set;
}

bool EntityMib::Entlogicaltable::Entlogicalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entlogicalindex.operation)
	|| is_set(entlogicalcommunity.operation)
	|| is_set(entlogicalcontextengineid.operation)
	|| is_set(entlogicalcontextname.operation)
	|| is_set(entlogicaldescr.operation)
	|| is_set(entlogicaltaddress.operation)
	|| is_set(entlogicaltdomain.operation)
	|| is_set(entlogicaltype.operation);
}

std::string EntityMib::Entlogicaltable::Entlogicalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLogicalEntry" <<"[entLogicalIndex='" <<entlogicalindex <<"']";

    return path_buffer.str();

}

const EntityPath EntityMib::Entlogicaltable::Entlogicalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/entLogicalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entlogicalindex.is_set || is_set(entlogicalindex.operation)) leaf_name_data.push_back(entlogicalindex.get_name_leafdata());
    if (entlogicalcommunity.is_set || is_set(entlogicalcommunity.operation)) leaf_name_data.push_back(entlogicalcommunity.get_name_leafdata());
    if (entlogicalcontextengineid.is_set || is_set(entlogicalcontextengineid.operation)) leaf_name_data.push_back(entlogicalcontextengineid.get_name_leafdata());
    if (entlogicalcontextname.is_set || is_set(entlogicalcontextname.operation)) leaf_name_data.push_back(entlogicalcontextname.get_name_leafdata());
    if (entlogicaldescr.is_set || is_set(entlogicaldescr.operation)) leaf_name_data.push_back(entlogicaldescr.get_name_leafdata());
    if (entlogicaltaddress.is_set || is_set(entlogicaltaddress.operation)) leaf_name_data.push_back(entlogicaltaddress.get_name_leafdata());
    if (entlogicaltdomain.is_set || is_set(entlogicaltdomain.operation)) leaf_name_data.push_back(entlogicaltdomain.get_name_leafdata());
    if (entlogicaltype.is_set || is_set(entlogicaltype.operation)) leaf_name_data.push_back(entlogicaltype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entlogicaltable::Entlogicalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entlogicaltable::Entlogicalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityMib::Entlogicaltable::Entlogicalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entLogicalIndex")
    {
        entlogicalindex = value;
    }
    if(value_path == "entLogicalCommunity")
    {
        entlogicalcommunity = value;
    }
    if(value_path == "entLogicalContextEngineID")
    {
        entlogicalcontextengineid = value;
    }
    if(value_path == "entLogicalContextName")
    {
        entlogicalcontextname = value;
    }
    if(value_path == "entLogicalDescr")
    {
        entlogicaldescr = value;
    }
    if(value_path == "entLogicalTAddress")
    {
        entlogicaltaddress = value;
    }
    if(value_path == "entLogicalTDomain")
    {
        entlogicaltdomain = value;
    }
    if(value_path == "entLogicalType")
    {
        entlogicaltype = value;
    }
}

EntityMib::Entlpmappingtable::Entlpmappingtable()
{
    yang_name = "entLPMappingTable"; yang_parent_name = "ENTITY-MIB";
}

EntityMib::Entlpmappingtable::~Entlpmappingtable()
{
}

bool EntityMib::Entlpmappingtable::has_data() const
{
    for (std::size_t index=0; index<entlpmappingentry_.size(); index++)
    {
        if(entlpmappingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EntityMib::Entlpmappingtable::has_operation() const
{
    for (std::size_t index=0; index<entlpmappingentry_.size(); index++)
    {
        if(entlpmappingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EntityMib::Entlpmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLPMappingTable";

    return path_buffer.str();

}

const EntityPath EntityMib::Entlpmappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entlpmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entLPMappingEntry")
    {
        for(auto const & c : entlpmappingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EntityMib::Entlpmappingtable::Entlpmappingentry>();
        c->parent = this;
        entlpmappingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entlpmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entlpmappingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EntityMib::Entlpmappingtable::set_value(const std::string & value_path, std::string value)
{
}

EntityMib::Entlpmappingtable::Entlpmappingentry::Entlpmappingentry()
    :
    entlogicalindex{YType::str, "entLogicalIndex"},
    entlpphysicalindex{YType::int32, "entLPPhysicalIndex"}
{
    yang_name = "entLPMappingEntry"; yang_parent_name = "entLPMappingTable";
}

EntityMib::Entlpmappingtable::Entlpmappingentry::~Entlpmappingentry()
{
}

bool EntityMib::Entlpmappingtable::Entlpmappingentry::has_data() const
{
    return entlogicalindex.is_set
	|| entlpphysicalindex.is_set;
}

bool EntityMib::Entlpmappingtable::Entlpmappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entlogicalindex.operation)
	|| is_set(entlpphysicalindex.operation);
}

std::string EntityMib::Entlpmappingtable::Entlpmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entLPMappingEntry" <<"[entLogicalIndex='" <<entlogicalindex <<"']" <<"[entLPPhysicalIndex='" <<entlpphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath EntityMib::Entlpmappingtable::Entlpmappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/entLPMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entlogicalindex.is_set || is_set(entlogicalindex.operation)) leaf_name_data.push_back(entlogicalindex.get_name_leafdata());
    if (entlpphysicalindex.is_set || is_set(entlpphysicalindex.operation)) leaf_name_data.push_back(entlpphysicalindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entlpmappingtable::Entlpmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entlpmappingtable::Entlpmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityMib::Entlpmappingtable::Entlpmappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entLogicalIndex")
    {
        entlogicalindex = value;
    }
    if(value_path == "entLPPhysicalIndex")
    {
        entlpphysicalindex = value;
    }
}

EntityMib::Entaliasmappingtable::Entaliasmappingtable()
{
    yang_name = "entAliasMappingTable"; yang_parent_name = "ENTITY-MIB";
}

EntityMib::Entaliasmappingtable::~Entaliasmappingtable()
{
}

bool EntityMib::Entaliasmappingtable::has_data() const
{
    for (std::size_t index=0; index<entaliasmappingentry_.size(); index++)
    {
        if(entaliasmappingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EntityMib::Entaliasmappingtable::has_operation() const
{
    for (std::size_t index=0; index<entaliasmappingentry_.size(); index++)
    {
        if(entaliasmappingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EntityMib::Entaliasmappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entAliasMappingTable";

    return path_buffer.str();

}

const EntityPath EntityMib::Entaliasmappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entaliasmappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entAliasMappingEntry")
    {
        for(auto const & c : entaliasmappingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EntityMib::Entaliasmappingtable::Entaliasmappingentry>();
        c->parent = this;
        entaliasmappingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entaliasmappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entaliasmappingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EntityMib::Entaliasmappingtable::set_value(const std::string & value_path, std::string value)
{
}

EntityMib::Entaliasmappingtable::Entaliasmappingentry::Entaliasmappingentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entaliaslogicalindexorzero{YType::int32, "entAliasLogicalIndexOrZero"},
    entaliasmappingidentifier{YType::str, "entAliasMappingIdentifier"}
{
    yang_name = "entAliasMappingEntry"; yang_parent_name = "entAliasMappingTable";
}

EntityMib::Entaliasmappingtable::Entaliasmappingentry::~Entaliasmappingentry()
{
}

bool EntityMib::Entaliasmappingtable::Entaliasmappingentry::has_data() const
{
    return entphysicalindex.is_set
	|| entaliaslogicalindexorzero.is_set
	|| entaliasmappingidentifier.is_set;
}

bool EntityMib::Entaliasmappingtable::Entaliasmappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(entaliaslogicalindexorzero.operation)
	|| is_set(entaliasmappingidentifier.operation);
}

std::string EntityMib::Entaliasmappingtable::Entaliasmappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entAliasMappingEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[entAliasLogicalIndexOrZero='" <<entaliaslogicalindexorzero <<"']";

    return path_buffer.str();

}

const EntityPath EntityMib::Entaliasmappingtable::Entaliasmappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/entAliasMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entaliaslogicalindexorzero.is_set || is_set(entaliaslogicalindexorzero.operation)) leaf_name_data.push_back(entaliaslogicalindexorzero.get_name_leafdata());
    if (entaliasmappingidentifier.is_set || is_set(entaliasmappingidentifier.operation)) leaf_name_data.push_back(entaliasmappingidentifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entaliasmappingtable::Entaliasmappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entaliasmappingtable::Entaliasmappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityMib::Entaliasmappingtable::Entaliasmappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "entAliasLogicalIndexOrZero")
    {
        entaliaslogicalindexorzero = value;
    }
    if(value_path == "entAliasMappingIdentifier")
    {
        entaliasmappingidentifier = value;
    }
}

EntityMib::Entphysicalcontainstable::Entphysicalcontainstable()
{
    yang_name = "entPhysicalContainsTable"; yang_parent_name = "ENTITY-MIB";
}

EntityMib::Entphysicalcontainstable::~Entphysicalcontainstable()
{
}

bool EntityMib::Entphysicalcontainstable::has_data() const
{
    for (std::size_t index=0; index<entphysicalcontainsentry_.size(); index++)
    {
        if(entphysicalcontainsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EntityMib::Entphysicalcontainstable::has_operation() const
{
    for (std::size_t index=0; index<entphysicalcontainsentry_.size(); index++)
    {
        if(entphysicalcontainsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EntityMib::Entphysicalcontainstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalContainsTable";

    return path_buffer.str();

}

const EntityPath EntityMib::Entphysicalcontainstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entphysicalcontainstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entPhysicalContainsEntry")
    {
        for(auto const & c : entphysicalcontainsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry>();
        c->parent = this;
        entphysicalcontainsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entphysicalcontainstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entphysicalcontainsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EntityMib::Entphysicalcontainstable::set_value(const std::string & value_path, std::string value)
{
}

EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry::Entphysicalcontainsentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entphysicalchildindex{YType::int32, "entPhysicalChildIndex"}
{
    yang_name = "entPhysicalContainsEntry"; yang_parent_name = "entPhysicalContainsTable";
}

EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry::~Entphysicalcontainsentry()
{
}

bool EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry::has_data() const
{
    return entphysicalindex.is_set
	|| entphysicalchildindex.is_set;
}

bool EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(entphysicalchildindex.operation);
}

std::string EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entPhysicalContainsEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[entPhysicalChildIndex='" <<entphysicalchildindex <<"']";

    return path_buffer.str();

}

const EntityPath EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ENTITY-MIB:ENTITY-MIB/entPhysicalContainsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entphysicalchildindex.is_set || is_set(entphysicalchildindex.operation)) leaf_name_data.push_back(entphysicalchildindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EntityMib::Entphysicalcontainstable::Entphysicalcontainsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "entPhysicalChildIndex")
    {
        entphysicalchildindex = value;
    }
}

const Enum::YLeaf PhysicalclassEnum::other {1, "other"};
const Enum::YLeaf PhysicalclassEnum::unknown {2, "unknown"};
const Enum::YLeaf PhysicalclassEnum::chassis {3, "chassis"};
const Enum::YLeaf PhysicalclassEnum::backplane {4, "backplane"};
const Enum::YLeaf PhysicalclassEnum::container {5, "container"};
const Enum::YLeaf PhysicalclassEnum::powerSupply {6, "powerSupply"};
const Enum::YLeaf PhysicalclassEnum::fan {7, "fan"};
const Enum::YLeaf PhysicalclassEnum::sensor {8, "sensor"};
const Enum::YLeaf PhysicalclassEnum::module {9, "module"};
const Enum::YLeaf PhysicalclassEnum::port {10, "port"};
const Enum::YLeaf PhysicalclassEnum::stack {11, "stack"};
const Enum::YLeaf PhysicalclassEnum::cpu {12, "cpu"};


}
}

