#ifndef _PIM_MIB_
#define _PIM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace PIM_MIB {

class PimMib : public ydk::Entity
{
    public:
        PimMib();
        ~PimMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Pim; //type: PimMib::Pim
        class Piminterfacetable; //type: PimMib::Piminterfacetable
        class Pimneighbortable; //type: PimMib::Pimneighbortable
        class Pimipmroutetable; //type: PimMib::Pimipmroutetable
        class Pimrptable; //type: PimMib::Pimrptable
        class Pimrpsettable; //type: PimMib::Pimrpsettable
        class Pimipmroutenexthoptable; //type: PimMib::Pimipmroutenexthoptable
        class Pimcandidaterptable; //type: PimMib::Pimcandidaterptable
        class Pimcomponenttable; //type: PimMib::Pimcomponenttable

        std::shared_ptr<PIM_MIB::PimMib::Pim> pim;
        std::shared_ptr<PIM_MIB::PimMib::Pimcandidaterptable> pimcandidaterptable;
        std::shared_ptr<PIM_MIB::PimMib::Pimcomponenttable> pimcomponenttable;
        std::shared_ptr<PIM_MIB::PimMib::Piminterfacetable> piminterfacetable;
        std::shared_ptr<PIM_MIB::PimMib::Pimipmroutenexthoptable> pimipmroutenexthoptable;
        std::shared_ptr<PIM_MIB::PimMib::Pimipmroutetable> pimipmroutetable;
        std::shared_ptr<PIM_MIB::PimMib::Pimneighbortable> pimneighbortable;
        std::shared_ptr<PIM_MIB::PimMib::Pimrpsettable> pimrpsettable;
        std::shared_ptr<PIM_MIB::PimMib::Pimrptable> pimrptable;
        
}; // PimMib


class PimMib::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pimjoinpruneinterval; //type: int32

}; // PimMib::Pim


class PimMib::Piminterfacetable : public ydk::Entity
{
    public:
        Piminterfacetable();
        ~Piminterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Piminterfaceentry; //type: PimMib::Piminterfacetable::Piminterfaceentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Piminterfacetable::Piminterfaceentry> > piminterfaceentry;
        
}; // PimMib::Piminterfacetable


class PimMib::Piminterfacetable::Piminterfaceentry : public ydk::Entity
{
    public:
        Piminterfaceentry();
        ~Piminterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf piminterfaceifindex; //type: int32
        ydk::YLeaf piminterfaceaddress; //type: string
        ydk::YLeaf piminterfacenetmask; //type: string
        ydk::YLeaf piminterfacemode; //type: Piminterfacemode
        ydk::YLeaf piminterfacedr; //type: string
        ydk::YLeaf piminterfacehellointerval; //type: int32
        ydk::YLeaf piminterfacestatus; //type: Rowstatus
        ydk::YLeaf piminterfacejoinpruneinterval; //type: int32
        ydk::YLeaf piminterfacecbsrpreference; //type: int32
        class Piminterfacemode;

}; // PimMib::Piminterfacetable::Piminterfaceentry


class PimMib::Pimneighbortable : public ydk::Entity
{
    public:
        Pimneighbortable();
        ~Pimneighbortable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pimneighborentry; //type: PimMib::Pimneighbortable::Pimneighborentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimneighbortable::Pimneighborentry> > pimneighborentry;
        
}; // PimMib::Pimneighbortable


class PimMib::Pimneighbortable::Pimneighborentry : public ydk::Entity
{
    public:
        Pimneighborentry();
        ~Pimneighborentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pimneighboraddress; //type: string
        ydk::YLeaf pimneighborifindex; //type: int32
        ydk::YLeaf pimneighboruptime; //type: uint32
        ydk::YLeaf pimneighborexpirytime; //type: uint32
        ydk::YLeaf pimneighbormode; //type: Pimneighbormode
        class Pimneighbormode;

}; // PimMib::Pimneighbortable::Pimneighborentry


class PimMib::Pimipmroutetable : public ydk::Entity
{
    public:
        Pimipmroutetable();
        ~Pimipmroutetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pimipmrouteentry; //type: PimMib::Pimipmroutetable::Pimipmrouteentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimipmroutetable::Pimipmrouteentry> > pimipmrouteentry;
        
}; // PimMib::Pimipmroutetable


class PimMib::Pimipmroutetable::Pimipmrouteentry : public ydk::Entity
{
    public:
        Pimipmrouteentry();
        ~Pimipmrouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::ipmroutegroup)
        ydk::YLeaf ipmroutegroup;
        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::ipmroutesource)
        ydk::YLeaf ipmroutesource;
        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::ipmroutesourcemask)
        ydk::YLeaf ipmroutesourcemask;
        ydk::YLeaf pimipmrouteupstreamasserttimer; //type: uint32
        ydk::YLeaf pimipmrouteassertmetric; //type: int32
        ydk::YLeaf pimipmrouteassertmetricpref; //type: int32
        ydk::YLeaf pimipmrouteassertrptbit; //type: boolean
        ydk::YLeaf pimipmrouteflags; //type: binary

}; // PimMib::Pimipmroutetable::Pimipmrouteentry


class PimMib::Pimrptable : public ydk::Entity
{
    public:
        Pimrptable();
        ~Pimrptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pimrpentry; //type: PimMib::Pimrptable::Pimrpentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimrptable::Pimrpentry> > pimrpentry;
        
}; // PimMib::Pimrptable


class PimMib::Pimrptable::Pimrpentry : public ydk::Entity
{
    public:
        Pimrpentry();
        ~Pimrpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pimrpgroupaddress; //type: string
        ydk::YLeaf pimrpaddress; //type: string
        ydk::YLeaf pimrpstate; //type: Pimrpstate
        ydk::YLeaf pimrpstatetimer; //type: uint32
        ydk::YLeaf pimrplastchange; //type: uint32
        ydk::YLeaf pimrprowstatus; //type: Rowstatus
        class Pimrpstate;

}; // PimMib::Pimrptable::Pimrpentry


class PimMib::Pimrpsettable : public ydk::Entity
{
    public:
        Pimrpsettable();
        ~Pimrpsettable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pimrpsetentry; //type: PimMib::Pimrpsettable::Pimrpsetentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimrpsettable::Pimrpsetentry> > pimrpsetentry;
        
}; // PimMib::Pimrpsettable


class PimMib::Pimrpsettable::Pimrpsetentry : public ydk::Entity
{
    public:
        Pimrpsetentry();
        ~Pimrpsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pimrpsetcomponent; //type: int32
        ydk::YLeaf pimrpsetgroupaddress; //type: string
        ydk::YLeaf pimrpsetgroupmask; //type: string
        ydk::YLeaf pimrpsetaddress; //type: string
        ydk::YLeaf pimrpsetholdtime; //type: int32
        ydk::YLeaf pimrpsetexpirytime; //type: uint32

}; // PimMib::Pimrpsettable::Pimrpsetentry


class PimMib::Pimipmroutenexthoptable : public ydk::Entity
{
    public:
        Pimipmroutenexthoptable();
        ~Pimipmroutenexthoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pimipmroutenexthopentry; //type: PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry> > pimipmroutenexthopentry;
        
}; // PimMib::Pimipmroutenexthoptable


class PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry : public ydk::Entity
{
    public:
        Pimipmroutenexthopentry();
        ~Pimipmroutenexthopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopgroup)
        ydk::YLeaf ipmroutenexthopgroup;
        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopsource)
        ydk::YLeaf ipmroutenexthopsource;
        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopsourcemask)
        ydk::YLeaf ipmroutenexthopsourcemask;
        //type: int32 (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopifindex)
        ydk::YLeaf ipmroutenexthopifindex;
        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopaddress)
        ydk::YLeaf ipmroutenexthopaddress;
        ydk::YLeaf pimipmroutenexthopprunereason; //type: Pimipmroutenexthopprunereason
        class Pimipmroutenexthopprunereason;

}; // PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry


class PimMib::Pimcandidaterptable : public ydk::Entity
{
    public:
        Pimcandidaterptable();
        ~Pimcandidaterptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pimcandidaterpentry; //type: PimMib::Pimcandidaterptable::Pimcandidaterpentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimcandidaterptable::Pimcandidaterpentry> > pimcandidaterpentry;
        
}; // PimMib::Pimcandidaterptable


class PimMib::Pimcandidaterptable::Pimcandidaterpentry : public ydk::Entity
{
    public:
        Pimcandidaterpentry();
        ~Pimcandidaterpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pimcandidaterpgroupaddress; //type: string
        ydk::YLeaf pimcandidaterpgroupmask; //type: string
        ydk::YLeaf pimcandidaterpaddress; //type: string
        ydk::YLeaf pimcandidaterprowstatus; //type: Rowstatus

}; // PimMib::Pimcandidaterptable::Pimcandidaterpentry


class PimMib::Pimcomponenttable : public ydk::Entity
{
    public:
        Pimcomponenttable();
        ~Pimcomponenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pimcomponententry; //type: PimMib::Pimcomponenttable::Pimcomponententry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimcomponenttable::Pimcomponententry> > pimcomponententry;
        
}; // PimMib::Pimcomponenttable


class PimMib::Pimcomponenttable::Pimcomponententry : public ydk::Entity
{
    public:
        Pimcomponententry();
        ~Pimcomponententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pimcomponentindex; //type: int32
        ydk::YLeaf pimcomponentbsraddress; //type: string
        ydk::YLeaf pimcomponentbsrexpirytime; //type: uint32
        ydk::YLeaf pimcomponentcrpholdtime; //type: int32
        ydk::YLeaf pimcomponentstatus; //type: Rowstatus

}; // PimMib::Pimcomponenttable::Pimcomponententry

class PimMib::Piminterfacetable::Piminterfaceentry::Piminterfacemode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dense;
        static const ydk::Enum::YLeaf sparse;
        static const ydk::Enum::YLeaf sparseDense;

};

class PimMib::Pimneighbortable::Pimneighborentry::Pimneighbormode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dense;
        static const ydk::Enum::YLeaf sparse;

};

class PimMib::Pimrptable::Pimrpentry::Pimrpstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::Pimipmroutenexthopprunereason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf prune;
        static const ydk::Enum::YLeaf assert;

};


}
}

#endif /* _PIM_MIB_ */

