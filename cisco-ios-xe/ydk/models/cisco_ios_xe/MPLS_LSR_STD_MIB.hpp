#ifndef _MPLS_LSR_STD_MIB_
#define _MPLS_LSR_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace MPLS_LSR_STD_MIB {

class MplsLsrStdMib : public Entity
{
    public:
        MplsLsrStdMib();
        ~MplsLsrStdMib();

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

        class Mplslsrobjects; //type: MplsLsrStdMib::Mplslsrobjects
        class Mplsinterfacetable; //type: MplsLsrStdMib::Mplsinterfacetable
        class Mplsinsegmenttable; //type: MplsLsrStdMib::Mplsinsegmenttable
        class Mplsoutsegmenttable; //type: MplsLsrStdMib::Mplsoutsegmenttable
        class Mplsxctable; //type: MplsLsrStdMib::Mplsxctable
        class Mplslabelstacktable; //type: MplsLsrStdMib::Mplslabelstacktable
        class Mplsinsegmentmaptable; //type: MplsLsrStdMib::Mplsinsegmentmaptable

        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinsegmentmaptable> mplsinsegmentmaptable_;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinsegmenttable> mplsinsegmenttable_;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinterfacetable> mplsinterfacetable_;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplslabelstacktable> mplslabelstacktable_;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplslsrobjects> mplslsrobjects_;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsoutsegmenttable> mplsoutsegmenttable_;
        std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsxctable> mplsxctable_;
        
}; // MplsLsrStdMib


class MplsLsrStdMib::Mplslsrobjects : public Entity
{
    public:
        Mplslsrobjects();
        ~Mplslsrobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsinsegmentindexnext; //type: binary
        YLeaf mplsoutsegmentindexnext; //type: binary
        YLeaf mplsxcindexnext; //type: binary
        YLeaf mplsmaxlabelstackdepth; //type: uint32
        YLeaf mplslabelstackindexnext; //type: binary
        YLeaf mplsxcnotificationsenable; //type: boolean

}; // MplsLsrStdMib::Mplslsrobjects


class MplsLsrStdMib::Mplsinterfacetable : public Entity
{
    public:
        Mplsinterfacetable();
        ~Mplsinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsinterfaceentry; //type: MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry> > mplsinterfaceentry_;
        
}; // MplsLsrStdMib::Mplsinterfacetable


class MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry : public Entity
{
    public:
        Mplsinterfaceentry();
        ~Mplsinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsinterfaceindex; //type: int32
        YLeaf mplsinterfacelabelminin; //type: uint32
        YLeaf mplsinterfacelabelmaxin; //type: uint32
        YLeaf mplsinterfacelabelminout; //type: uint32
        YLeaf mplsinterfacelabelmaxout; //type: uint32
        YLeaf mplsinterfacetotalbandwidth; //type: uint32
        YLeaf mplsinterfaceavailablebandwidth; //type: uint32
        YLeaf mplsinterfacelabelparticipationtype; //type: Mplsinterfacelabelparticipationtype
        YLeaf mplsinterfaceperfinlabelsinuse; //type: uint32
        YLeaf mplsinterfaceperfinlabellookupfailures; //type: uint32
        YLeaf mplsinterfaceperfoutlabelsinuse; //type: uint32
        YLeaf mplsinterfaceperfoutfragmentedpkts; //type: uint32

}; // MplsLsrStdMib::Mplsinterfacetable::Mplsinterfaceentry


class MplsLsrStdMib::Mplsinsegmenttable : public Entity
{
    public:
        Mplsinsegmenttable();
        ~Mplsinsegmenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsinsegmententry; //type: MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry> > mplsinsegmententry_;
        
}; // MplsLsrStdMib::Mplsinsegmenttable


class MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry : public Entity
{
    public:
        Mplsinsegmententry();
        ~Mplsinsegmententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsinsegmentindex; //type: binary
        YLeaf mplsinsegmentinterface; //type: int32
        YLeaf mplsinsegmentlabel; //type: uint32
        YLeaf mplsinsegmentlabelptr; //type: string
        YLeaf mplsinsegmentnpop; //type: int32
        YLeaf mplsinsegmentaddrfamily; //type: AddressfamilynumbersEnum
        YLeaf mplsinsegmentxcindex; //type: binary
        YLeaf mplsinsegmentowner; //type: MplsownerEnum
        YLeaf mplsinsegmenttrafficparamptr; //type: string
        YLeaf mplsinsegmentrowstatus; //type: RowstatusEnum
        YLeaf mplsinsegmentstoragetype; //type: StoragetypeEnum
        YLeaf mplsinsegmentperfoctets; //type: uint32
        YLeaf mplsinsegmentperfpackets; //type: uint32
        YLeaf mplsinsegmentperferrors; //type: uint32
        YLeaf mplsinsegmentperfdiscards; //type: uint32
        YLeaf mplsinsegmentperfhcoctets; //type: uint64
        YLeaf mplsinsegmentperfdiscontinuitytime; //type: uint32

}; // MplsLsrStdMib::Mplsinsegmenttable::Mplsinsegmententry


class MplsLsrStdMib::Mplsoutsegmenttable : public Entity
{
    public:
        Mplsoutsegmenttable();
        ~Mplsoutsegmenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsoutsegmententry; //type: MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry> > mplsoutsegmententry_;
        
}; // MplsLsrStdMib::Mplsoutsegmenttable


class MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry : public Entity
{
    public:
        Mplsoutsegmententry();
        ~Mplsoutsegmententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsoutsegmentindex; //type: binary
        YLeaf mplsoutsegmentinterface; //type: int32
        YLeaf mplsoutsegmentpushtoplabel; //type: boolean
        YLeaf mplsoutsegmenttoplabel; //type: uint32
        YLeaf mplsoutsegmenttoplabelptr; //type: string
        YLeaf mplsoutsegmentnexthopaddrtype; //type: InetaddresstypeEnum
        YLeaf mplsoutsegmentnexthopaddr; //type: binary
        YLeaf mplsoutsegmentxcindex; //type: binary
        YLeaf mplsoutsegmentowner; //type: MplsownerEnum
        YLeaf mplsoutsegmenttrafficparamptr; //type: string
        YLeaf mplsoutsegmentrowstatus; //type: RowstatusEnum
        YLeaf mplsoutsegmentstoragetype; //type: StoragetypeEnum
        YLeaf mplsoutsegmentperfoctets; //type: uint32
        YLeaf mplsoutsegmentperfpackets; //type: uint32
        YLeaf mplsoutsegmentperferrors; //type: uint32
        YLeaf mplsoutsegmentperfdiscards; //type: uint32
        YLeaf mplsoutsegmentperfhcoctets; //type: uint64
        YLeaf mplsoutsegmentperfdiscontinuitytime; //type: uint32

}; // MplsLsrStdMib::Mplsoutsegmenttable::Mplsoutsegmententry


class MplsLsrStdMib::Mplsxctable : public Entity
{
    public:
        Mplsxctable();
        ~Mplsxctable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsxcentry; //type: MplsLsrStdMib::Mplsxctable::Mplsxcentry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsxctable::Mplsxcentry> > mplsxcentry_;
        
}; // MplsLsrStdMib::Mplsxctable


class MplsLsrStdMib::Mplsxctable::Mplsxcentry : public Entity
{
    public:
        Mplsxcentry();
        ~Mplsxcentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsxcindex; //type: binary
        YLeaf mplsxcinsegmentindex; //type: binary
        YLeaf mplsxcoutsegmentindex; //type: binary
        YLeaf mplsxclspid; //type: binary
        YLeaf mplsxclabelstackindex; //type: binary
        YLeaf mplsxcowner; //type: MplsownerEnum
        YLeaf mplsxcrowstatus; //type: RowstatusEnum
        YLeaf mplsxcstoragetype; //type: StoragetypeEnum
        YLeaf mplsxcadminstatus; //type: MplsxcadminstatusEnum
        YLeaf mplsxcoperstatus; //type: MplsxcoperstatusEnum
        class MplsxcadminstatusEnum;
        class MplsxcoperstatusEnum;

}; // MplsLsrStdMib::Mplsxctable::Mplsxcentry


class MplsLsrStdMib::Mplslabelstacktable : public Entity
{
    public:
        Mplslabelstacktable();
        ~Mplslabelstacktable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplslabelstackentry; //type: MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry> > mplslabelstackentry_;
        
}; // MplsLsrStdMib::Mplslabelstacktable


class MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry : public Entity
{
    public:
        Mplslabelstackentry();
        ~Mplslabelstackentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplslabelstackindex; //type: binary
        YLeaf mplslabelstacklabelindex; //type: uint32
        YLeaf mplslabelstacklabel; //type: uint32
        YLeaf mplslabelstacklabelptr; //type: string
        YLeaf mplslabelstackrowstatus; //type: RowstatusEnum
        YLeaf mplslabelstackstoragetype; //type: StoragetypeEnum

}; // MplsLsrStdMib::Mplslabelstacktable::Mplslabelstackentry


class MplsLsrStdMib::Mplsinsegmentmaptable : public Entity
{
    public:
        Mplsinsegmentmaptable();
        ~Mplsinsegmentmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsinsegmentmapentry; //type: MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry

        std::vector<std::shared_ptr<MPLS_LSR_STD_MIB::MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry> > mplsinsegmentmapentry_;
        
}; // MplsLsrStdMib::Mplsinsegmentmaptable


class MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry : public Entity
{
    public:
        Mplsinsegmentmapentry();
        ~Mplsinsegmentmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsinsegmentmapinterface; //type: int32
        YLeaf mplsinsegmentmaplabel; //type: uint32
        YLeaf mplsinsegmentmaplabelptrindex; //type: string
        YLeaf mplsinsegmentmapindex; //type: binary

}; // MplsLsrStdMib::Mplsinsegmentmaptable::Mplsinsegmentmapentry

class MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcadminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;

};

class MplsLsrStdMib::Mplsxctable::Mplsxcentry::MplsxcoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf dormant;
        static const Enum::YLeaf notPresent;
        static const Enum::YLeaf lowerLayerDown;

};


}
}

#endif /* _MPLS_LSR_STD_MIB_ */

