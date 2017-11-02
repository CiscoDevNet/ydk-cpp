#ifndef _PIM_MIB_
#define _PIM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace PIM_MIB {

class PIMMIB : public ydk::Entity
{
    public:
        PIMMIB();
        ~PIMMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Pim; //type: PIMMIB::Pim
        class Piminterfacetable; //type: PIMMIB::Piminterfacetable
        class Pimneighbortable; //type: PIMMIB::Pimneighbortable
        class Pimipmroutetable; //type: PIMMIB::Pimipmroutetable
        class Pimrptable; //type: PIMMIB::Pimrptable
        class Pimrpsettable; //type: PIMMIB::Pimrpsettable
        class Pimipmroutenexthoptable; //type: PIMMIB::Pimipmroutenexthoptable
        class Pimcandidaterptable; //type: PIMMIB::Pimcandidaterptable
        class Pimcomponenttable; //type: PIMMIB::Pimcomponenttable

        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pim> pim;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Piminterfacetable> piminterfacetable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimneighbortable> pimneighbortable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimipmroutetable> pimipmroutetable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimrptable> pimrptable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimrpsettable> pimrpsettable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimipmroutenexthoptable> pimipmroutenexthoptable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimcandidaterptable> pimcandidaterptable;
        std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimcomponenttable> pimcomponenttable;
        
}; // PIMMIB


class PIMMIB::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pimjoinpruneinterval; //type: int32

}; // PIMMIB::Pim


class PIMMIB::Piminterfacetable : public ydk::Entity
{
    public:
        Piminterfacetable();
        ~Piminterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Piminterfaceentry; //type: PIMMIB::Piminterfacetable::Piminterfaceentry

        std::vector<std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Piminterfacetable::Piminterfaceentry> > piminterfaceentry;
        
}; // PIMMIB::Piminterfacetable


class PIMMIB::Piminterfacetable::Piminterfaceentry : public ydk::Entity
{
    public:
        Piminterfaceentry();
        ~Piminterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf piminterfaceifindex; //type: int32
        ydk::YLeaf piminterfaceaddress; //type: string
        ydk::YLeaf piminterfacenetmask; //type: string
        ydk::YLeaf piminterfacemode; //type: Piminterfacemode
        ydk::YLeaf piminterfacedr; //type: string
        ydk::YLeaf piminterfacehellointerval; //type: int32
        ydk::YLeaf piminterfacestatus; //type: RowStatus
        ydk::YLeaf piminterfacejoinpruneinterval; //type: int32
        ydk::YLeaf piminterfacecbsrpreference; //type: int32
        class Piminterfacemode;

}; // PIMMIB::Piminterfacetable::Piminterfaceentry


class PIMMIB::Pimneighbortable : public ydk::Entity
{
    public:
        Pimneighbortable();
        ~Pimneighbortable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pimneighborentry; //type: PIMMIB::Pimneighbortable::Pimneighborentry

        std::vector<std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimneighbortable::Pimneighborentry> > pimneighborentry;
        
}; // PIMMIB::Pimneighbortable


class PIMMIB::Pimneighbortable::Pimneighborentry : public ydk::Entity
{
    public:
        Pimneighborentry();
        ~Pimneighborentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pimneighboraddress; //type: string
        ydk::YLeaf pimneighborifindex; //type: int32
        ydk::YLeaf pimneighboruptime; //type: uint32
        ydk::YLeaf pimneighborexpirytime; //type: uint32
        ydk::YLeaf pimneighbormode; //type: Pimneighbormode
        class Pimneighbormode;

}; // PIMMIB::Pimneighbortable::Pimneighborentry


class PIMMIB::Pimipmroutetable : public ydk::Entity
{
    public:
        Pimipmroutetable();
        ~Pimipmroutetable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pimipmrouteentry; //type: PIMMIB::Pimipmroutetable::Pimipmrouteentry

        std::vector<std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimipmroutetable::Pimipmrouteentry> > pimipmrouteentry;
        
}; // PIMMIB::Pimipmroutetable


class PIMMIB::Pimipmroutetable::Pimipmrouteentry : public ydk::Entity
{
    public:
        Pimipmrouteentry();
        ~Pimipmrouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::ipmroutegroup)
        ydk::YLeaf ipmroutegroup;
        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::ipmroutesource)
        ydk::YLeaf ipmroutesource;
        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::ipmroutesourcemask)
        ydk::YLeaf ipmroutesourcemask;
        ydk::YLeaf pimipmrouteupstreamasserttimer; //type: uint32
        ydk::YLeaf pimipmrouteassertmetric; //type: int32
        ydk::YLeaf pimipmrouteassertmetricpref; //type: int32
        ydk::YLeaf pimipmrouteassertrptbit; //type: boolean
        ydk::YLeaf pimipmrouteflags; //type: binary

}; // PIMMIB::Pimipmroutetable::Pimipmrouteentry


class PIMMIB::Pimrptable : public ydk::Entity
{
    public:
        Pimrptable();
        ~Pimrptable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pimrpentry; //type: PIMMIB::Pimrptable::Pimrpentry

        std::vector<std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimrptable::Pimrpentry> > pimrpentry;
        
}; // PIMMIB::Pimrptable


class PIMMIB::Pimrptable::Pimrpentry : public ydk::Entity
{
    public:
        Pimrpentry();
        ~Pimrpentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pimrpgroupaddress; //type: string
        ydk::YLeaf pimrpaddress; //type: string
        ydk::YLeaf pimrpstate; //type: Pimrpstate
        ydk::YLeaf pimrpstatetimer; //type: uint32
        ydk::YLeaf pimrplastchange; //type: uint32
        ydk::YLeaf pimrprowstatus; //type: RowStatus
        class Pimrpstate;

}; // PIMMIB::Pimrptable::Pimrpentry


class PIMMIB::Pimrpsettable : public ydk::Entity
{
    public:
        Pimrpsettable();
        ~Pimrpsettable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pimrpsetentry; //type: PIMMIB::Pimrpsettable::Pimrpsetentry

        std::vector<std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimrpsettable::Pimrpsetentry> > pimrpsetentry;
        
}; // PIMMIB::Pimrpsettable


class PIMMIB::Pimrpsettable::Pimrpsetentry : public ydk::Entity
{
    public:
        Pimrpsetentry();
        ~Pimrpsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pimrpsetcomponent; //type: int32
        ydk::YLeaf pimrpsetgroupaddress; //type: string
        ydk::YLeaf pimrpsetgroupmask; //type: string
        ydk::YLeaf pimrpsetaddress; //type: string
        ydk::YLeaf pimrpsetholdtime; //type: int32
        ydk::YLeaf pimrpsetexpirytime; //type: uint32

}; // PIMMIB::Pimrpsettable::Pimrpsetentry


class PIMMIB::Pimipmroutenexthoptable : public ydk::Entity
{
    public:
        Pimipmroutenexthoptable();
        ~Pimipmroutenexthoptable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pimipmroutenexthopentry; //type: PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry

        std::vector<std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry> > pimipmroutenexthopentry;
        
}; // PIMMIB::Pimipmroutenexthoptable


class PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry : public ydk::Entity
{
    public:
        Pimipmroutenexthopentry();
        ~Pimipmroutenexthopentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopgroup)
        ydk::YLeaf ipmroutenexthopgroup;
        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopsource)
        ydk::YLeaf ipmroutenexthopsource;
        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopsourcemask)
        ydk::YLeaf ipmroutenexthopsourcemask;
        //type: int32 (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopifindex)
        ydk::YLeaf ipmroutenexthopifindex;
        //type: string (refers to cisco_ios_xe::IPMROUTE_STD_MIB::IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopaddress)
        ydk::YLeaf ipmroutenexthopaddress;
        ydk::YLeaf pimipmroutenexthopprunereason; //type: Pimipmroutenexthopprunereason
        class Pimipmroutenexthopprunereason;

}; // PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry


class PIMMIB::Pimcandidaterptable : public ydk::Entity
{
    public:
        Pimcandidaterptable();
        ~Pimcandidaterptable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pimcandidaterpentry; //type: PIMMIB::Pimcandidaterptable::Pimcandidaterpentry

        std::vector<std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimcandidaterptable::Pimcandidaterpentry> > pimcandidaterpentry;
        
}; // PIMMIB::Pimcandidaterptable


class PIMMIB::Pimcandidaterptable::Pimcandidaterpentry : public ydk::Entity
{
    public:
        Pimcandidaterpentry();
        ~Pimcandidaterpentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pimcandidaterpgroupaddress; //type: string
        ydk::YLeaf pimcandidaterpgroupmask; //type: string
        ydk::YLeaf pimcandidaterpaddress; //type: string
        ydk::YLeaf pimcandidaterprowstatus; //type: RowStatus

}; // PIMMIB::Pimcandidaterptable::Pimcandidaterpentry


class PIMMIB::Pimcomponenttable : public ydk::Entity
{
    public:
        Pimcomponenttable();
        ~Pimcomponenttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Pimcomponententry; //type: PIMMIB::Pimcomponenttable::Pimcomponententry

        std::vector<std::shared_ptr<cisco_ios_xe::PIM_MIB::PIMMIB::Pimcomponenttable::Pimcomponententry> > pimcomponententry;
        
}; // PIMMIB::Pimcomponenttable


class PIMMIB::Pimcomponenttable::Pimcomponententry : public ydk::Entity
{
    public:
        Pimcomponententry();
        ~Pimcomponententry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pimcomponentindex; //type: int32
        ydk::YLeaf pimcomponentbsraddress; //type: string
        ydk::YLeaf pimcomponentbsrexpirytime; //type: uint32
        ydk::YLeaf pimcomponentcrpholdtime; //type: int32
        ydk::YLeaf pimcomponentstatus; //type: RowStatus

}; // PIMMIB::Pimcomponenttable::Pimcomponententry

class PIMMIB::Piminterfacetable::Piminterfaceentry::Piminterfacemode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dense;
        static const ydk::Enum::YLeaf sparse;
        static const ydk::Enum::YLeaf sparseDense;

};

class PIMMIB::Pimneighbortable::Pimneighborentry::Pimneighbormode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dense;
        static const ydk::Enum::YLeaf sparse;

};

class PIMMIB::Pimrptable::Pimrpentry::Pimrpstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::Pimipmroutenexthopprunereason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf prune;
        static const ydk::Enum::YLeaf assert;

};


}
}

#endif /* _PIM_MIB_ */

