#ifndef _PIM_MIB_
#define _PIM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace PIM_MIB {

class PimMib : public Entity
{
    public:
        PimMib();
        ~PimMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Pim; //type: PimMib::Pim
        class Piminterfacetable; //type: PimMib::Piminterfacetable
        class Pimneighbortable; //type: PimMib::Pimneighbortable
        class Pimipmroutetable; //type: PimMib::Pimipmroutetable
        class Pimrptable; //type: PimMib::Pimrptable
        class Pimrpsettable; //type: PimMib::Pimrpsettable
        class Pimipmroutenexthoptable; //type: PimMib::Pimipmroutenexthoptable
        class Pimcandidaterptable; //type: PimMib::Pimcandidaterptable
        class Pimcomponenttable; //type: PimMib::Pimcomponenttable

        std::shared_ptr<PIM_MIB::PimMib::Pim> pim_;
        std::shared_ptr<PIM_MIB::PimMib::Pimcandidaterptable> pimcandidaterptable_;
        std::shared_ptr<PIM_MIB::PimMib::Pimcomponenttable> pimcomponenttable_;
        std::shared_ptr<PIM_MIB::PimMib::Piminterfacetable> piminterfacetable_;
        std::shared_ptr<PIM_MIB::PimMib::Pimipmroutenexthoptable> pimipmroutenexthoptable_;
        std::shared_ptr<PIM_MIB::PimMib::Pimipmroutetable> pimipmroutetable_;
        std::shared_ptr<PIM_MIB::PimMib::Pimneighbortable> pimneighbortable_;
        std::shared_ptr<PIM_MIB::PimMib::Pimrpsettable> pimrpsettable_;
        std::shared_ptr<PIM_MIB::PimMib::Pimrptable> pimrptable_;
        
}; // PimMib


class PimMib::Pim : public Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pimjoinpruneinterval; //type: int32

}; // PimMib::Pim


class PimMib::Piminterfacetable : public Entity
{
    public:
        Piminterfacetable();
        ~Piminterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Piminterfaceentry; //type: PimMib::Piminterfacetable::Piminterfaceentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Piminterfacetable::Piminterfaceentry> > piminterfaceentry_;
        
}; // PimMib::Piminterfacetable


class PimMib::Piminterfacetable::Piminterfaceentry : public Entity
{
    public:
        Piminterfaceentry();
        ~Piminterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf piminterfaceifindex; //type: int32
        YLeaf piminterfaceaddress; //type: string
        YLeaf piminterfacenetmask; //type: string
        YLeaf piminterfacemode; //type: PiminterfacemodeEnum
        YLeaf piminterfacedr; //type: string
        YLeaf piminterfacehellointerval; //type: int32
        YLeaf piminterfacestatus; //type: RowstatusEnum
        YLeaf piminterfacejoinpruneinterval; //type: int32
        YLeaf piminterfacecbsrpreference; //type: int32
        class PiminterfacemodeEnum;

}; // PimMib::Piminterfacetable::Piminterfaceentry


class PimMib::Pimneighbortable : public Entity
{
    public:
        Pimneighbortable();
        ~Pimneighbortable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pimneighborentry; //type: PimMib::Pimneighbortable::Pimneighborentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimneighbortable::Pimneighborentry> > pimneighborentry_;
        
}; // PimMib::Pimneighbortable


class PimMib::Pimneighbortable::Pimneighborentry : public Entity
{
    public:
        Pimneighborentry();
        ~Pimneighborentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pimneighboraddress; //type: string
        YLeaf pimneighborifindex; //type: int32
        YLeaf pimneighboruptime; //type: uint32
        YLeaf pimneighborexpirytime; //type: uint32
        YLeaf pimneighbormode; //type: PimneighbormodeEnum
        class PimneighbormodeEnum;

}; // PimMib::Pimneighbortable::Pimneighborentry


class PimMib::Pimipmroutetable : public Entity
{
    public:
        Pimipmroutetable();
        ~Pimipmroutetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pimipmrouteentry; //type: PimMib::Pimipmroutetable::Pimipmrouteentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimipmroutetable::Pimipmrouteentry> > pimipmrouteentry_;
        
}; // PimMib::Pimipmroutetable


class PimMib::Pimipmroutetable::Pimipmrouteentry : public Entity
{
    public:
        Pimipmrouteentry();
        ~Pimipmrouteentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::ipmroutegroup)
        YLeaf ipmroutegroup;
        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::ipmroutesource)
        YLeaf ipmroutesource;
        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutetable::Ipmrouteentry::ipmroutesourcemask)
        YLeaf ipmroutesourcemask;
        YLeaf pimipmrouteupstreamasserttimer; //type: uint32
        YLeaf pimipmrouteassertmetric; //type: int32
        YLeaf pimipmrouteassertmetricpref; //type: int32
        YLeaf pimipmrouteassertrptbit; //type: boolean
        YLeaf pimipmrouteflags; //type: binary

}; // PimMib::Pimipmroutetable::Pimipmrouteentry


class PimMib::Pimrptable : public Entity
{
    public:
        Pimrptable();
        ~Pimrptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pimrpentry; //type: PimMib::Pimrptable::Pimrpentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimrptable::Pimrpentry> > pimrpentry_;
        
}; // PimMib::Pimrptable


class PimMib::Pimrptable::Pimrpentry : public Entity
{
    public:
        Pimrpentry();
        ~Pimrpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pimrpgroupaddress; //type: string
        YLeaf pimrpaddress; //type: string
        YLeaf pimrpstate; //type: PimrpstateEnum
        YLeaf pimrpstatetimer; //type: uint32
        YLeaf pimrplastchange; //type: uint32
        YLeaf pimrprowstatus; //type: RowstatusEnum
        class PimrpstateEnum;

}; // PimMib::Pimrptable::Pimrpentry


class PimMib::Pimrpsettable : public Entity
{
    public:
        Pimrpsettable();
        ~Pimrpsettable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pimrpsetentry; //type: PimMib::Pimrpsettable::Pimrpsetentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimrpsettable::Pimrpsetentry> > pimrpsetentry_;
        
}; // PimMib::Pimrpsettable


class PimMib::Pimrpsettable::Pimrpsetentry : public Entity
{
    public:
        Pimrpsetentry();
        ~Pimrpsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pimrpsetcomponent; //type: int32
        YLeaf pimrpsetgroupaddress; //type: string
        YLeaf pimrpsetgroupmask; //type: string
        YLeaf pimrpsetaddress; //type: string
        YLeaf pimrpsetholdtime; //type: int32
        YLeaf pimrpsetexpirytime; //type: uint32

}; // PimMib::Pimrpsettable::Pimrpsetentry


class PimMib::Pimipmroutenexthoptable : public Entity
{
    public:
        Pimipmroutenexthoptable();
        ~Pimipmroutenexthoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pimipmroutenexthopentry; //type: PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry> > pimipmroutenexthopentry_;
        
}; // PimMib::Pimipmroutenexthoptable


class PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry : public Entity
{
    public:
        Pimipmroutenexthopentry();
        ~Pimipmroutenexthopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopgroup)
        YLeaf ipmroutenexthopgroup;
        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopsource)
        YLeaf ipmroutenexthopsource;
        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopsourcemask)
        YLeaf ipmroutenexthopsourcemask;
        //type: int32 (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopifindex)
        YLeaf ipmroutenexthopifindex;
        //type: string (refers to IPMROUTE_STD_MIB::IpmrouteStdMib::Ipmroutenexthoptable::Ipmroutenexthopentry::ipmroutenexthopaddress)
        YLeaf ipmroutenexthopaddress;
        YLeaf pimipmroutenexthopprunereason; //type: PimipmroutenexthopprunereasonEnum
        class PimipmroutenexthopprunereasonEnum;

}; // PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry


class PimMib::Pimcandidaterptable : public Entity
{
    public:
        Pimcandidaterptable();
        ~Pimcandidaterptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pimcandidaterpentry; //type: PimMib::Pimcandidaterptable::Pimcandidaterpentry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimcandidaterptable::Pimcandidaterpentry> > pimcandidaterpentry_;
        
}; // PimMib::Pimcandidaterptable


class PimMib::Pimcandidaterptable::Pimcandidaterpentry : public Entity
{
    public:
        Pimcandidaterpentry();
        ~Pimcandidaterpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pimcandidaterpgroupaddress; //type: string
        YLeaf pimcandidaterpgroupmask; //type: string
        YLeaf pimcandidaterpaddress; //type: string
        YLeaf pimcandidaterprowstatus; //type: RowstatusEnum

}; // PimMib::Pimcandidaterptable::Pimcandidaterpentry


class PimMib::Pimcomponenttable : public Entity
{
    public:
        Pimcomponenttable();
        ~Pimcomponenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pimcomponententry; //type: PimMib::Pimcomponenttable::Pimcomponententry

        std::vector<std::shared_ptr<PIM_MIB::PimMib::Pimcomponenttable::Pimcomponententry> > pimcomponententry_;
        
}; // PimMib::Pimcomponenttable


class PimMib::Pimcomponenttable::Pimcomponententry : public Entity
{
    public:
        Pimcomponententry();
        ~Pimcomponententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pimcomponentindex; //type: int32
        YLeaf pimcomponentbsraddress; //type: string
        YLeaf pimcomponentbsrexpirytime; //type: uint32
        YLeaf pimcomponentcrpholdtime; //type: int32
        YLeaf pimcomponentstatus; //type: RowstatusEnum

}; // PimMib::Pimcomponenttable::Pimcomponententry

class PimMib::Piminterfacetable::Piminterfaceentry::PiminterfacemodeEnum : public Enum
{
    public:
        static const Enum::YLeaf dense;
        static const Enum::YLeaf sparse;
        static const Enum::YLeaf sparseDense;

};

class PimMib::Pimneighbortable::Pimneighborentry::PimneighbormodeEnum : public Enum
{
    public:
        static const Enum::YLeaf dense;
        static const Enum::YLeaf sparse;

};

class PimMib::Pimrptable::Pimrpentry::PimrpstateEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;

};

class PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::PimipmroutenexthopprunereasonEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf prune;
        static const Enum::YLeaf assert;

};


}
}

#endif /* _PIM_MIB_ */

