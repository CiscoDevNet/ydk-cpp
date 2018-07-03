#ifndef _CISCO_IETF_FRR_MIB_
#define _CISCO_IETF_FRR_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_FRR_MIB {

class CISCOIETFFRRMIB : public ydk::Entity
{
    public:
        CISCOIETFFRRMIB();
        ~CISCOIETFFRRMIB();

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

        class CmplsFrrScalars; //type: CISCOIETFFRRMIB::CmplsFrrScalars
        class CmplsFrrConstTable; //type: CISCOIETFFRRMIB::CmplsFrrConstTable
        class CmplsFrrLogTable; //type: CISCOIETFFRRMIB::CmplsFrrLogTable
        class CmplsFrrFacRouteDBTable; //type: CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_FRR_MIB::CISCOIETFFRRMIB::CmplsFrrScalars> cmplsfrrscalars;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_FRR_MIB::CISCOIETFFRRMIB::CmplsFrrConstTable> cmplsfrrconsttable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_FRR_MIB::CISCOIETFFRRMIB::CmplsFrrLogTable> cmplsfrrlogtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_FRR_MIB::CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable> cmplsfrrfacroutedbtable;
        
}; // CISCOIETFFRRMIB


class CISCOIETFFRRMIB::CmplsFrrScalars : public ydk::Entity
{
    public:
        CmplsFrrScalars();
        ~CmplsFrrScalars();

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

        ydk::YLeaf cmplsfrrdetourincoming; //type: uint32
        ydk::YLeaf cmplsfrrdetouroutgoing; //type: uint32
        ydk::YLeaf cmplsfrrdetouroriginating; //type: uint32
        ydk::YLeaf cmplsfrrswitchover; //type: uint32
        ydk::YLeaf cmplsfrrnumofconfifs; //type: uint32
        ydk::YLeaf cmplsfrractprotectedifs; //type: uint32
        ydk::YLeaf cmplsfrrconfprotectingtuns; //type: uint32
        ydk::YLeaf cmplsfrractprotectedtuns; //type: uint32
        ydk::YLeaf cmplsfrractprotectedlsps; //type: uint32
        ydk::YLeaf cmplsfrrconstprotectionmethod; //type: CmplsFrrConstProtectionMethod
        ydk::YLeaf cmplsfrrnotifsenabled; //type: boolean
        ydk::YLeaf cmplsfrrlogtablemaxentries; //type: uint32
        ydk::YLeaf cmplsfrrlogtablecurrentries; //type: uint32
        ydk::YLeaf cmplsfrrnotifmaxrate; //type: uint32
        class CmplsFrrConstProtectionMethod;

}; // CISCOIETFFRRMIB::CmplsFrrScalars


class CISCOIETFFRRMIB::CmplsFrrConstTable : public ydk::Entity
{
    public:
        CmplsFrrConstTable();
        ~CmplsFrrConstTable();

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

        class CmplsFrrConstEntry; //type: CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry

        ydk::YList cmplsfrrconstentry;
        
}; // CISCOIETFFRRMIB::CmplsFrrConstTable


class CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry : public ydk::Entity
{
    public:
        CmplsFrrConstEntry();
        ~CmplsFrrConstEntry();

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

        ydk::YLeaf cmplsfrrconstifindex; //type: int32
        ydk::YLeaf cmplsfrrconsttunnelindex; //type: uint32
        ydk::YLeaf cmplsfrrconsttunnelinstance; //type: uint32
        ydk::YLeaf cmplsfrrconstsetupprio; //type: uint32
        ydk::YLeaf cmplsfrrconstholdingprio; //type: uint32
        ydk::YLeaf cmplsfrrconstinclanyaffinity; //type: uint32
        ydk::YLeaf cmplsfrrconstinclallaffinity; //type: uint32
        ydk::YLeaf cmplsfrrconstexclallaffinity; //type: uint32
        ydk::YLeaf cmplsfrrconsthoplimit; //type: uint32
        ydk::YLeaf cmplsfrrconstbandwidth; //type: uint32
        ydk::YLeaf cmplsfrrconstrowstatus; //type: RowStatus
        ydk::YLeaf cmplsfrrconstnumprotectingtunonif; //type: uint32
        ydk::YLeaf cmplsfrrconstnumprotectedtunonif; //type: uint32

}; // CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry


class CISCOIETFFRRMIB::CmplsFrrLogTable : public ydk::Entity
{
    public:
        CmplsFrrLogTable();
        ~CmplsFrrLogTable();

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

        class CmplsFrrLogEntry; //type: CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry

        ydk::YList cmplsfrrlogentry;
        
}; // CISCOIETFFRRMIB::CmplsFrrLogTable


class CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry : public ydk::Entity
{
    public:
        CmplsFrrLogEntry();
        ~CmplsFrrLogEntry();

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

        ydk::YLeaf cmplsfrrlogindex; //type: uint32
        ydk::YLeaf cmplsfrrlogeventtime; //type: uint32
        ydk::YLeaf cmplsfrrloginterface; //type: int32
        ydk::YLeaf cmplsfrrlogeventtype; //type: CmplsFrrLogEventType
        ydk::YLeaf cmplsfrrlogeventduration; //type: uint32
        ydk::YLeaf cmplsfrrlogeventreasonstring; //type: binary
        class CmplsFrrLogEventType;

}; // CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry


class CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable : public ydk::Entity
{
    public:
        CmplsFrrFacRouteDBTable();
        ~CmplsFrrFacRouteDBTable();

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

        class CmplsFrrFacRouteDBEntry; //type: CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry

        ydk::YList cmplsfrrfacroutedbentry;
        
}; // CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable


class CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry : public ydk::Entity
{
    public:
        CmplsFrrFacRouteDBEntry();
        ~CmplsFrrFacRouteDBEntry();

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

        ydk::YLeaf cmplsfrrfacrouteprotectedifindex; //type: int32
        ydk::YLeaf cmplsfrrfacrouteprotectingtunindex; //type: uint32
        ydk::YLeaf cmplsfrrfacrouteprotectedtunindex; //type: uint32
        ydk::YLeaf cmplsfrrfacrouteprotectedtuninstance; //type: uint32
        ydk::YLeaf cmplsfrrfacrouteprotectedtuningresslsrid; //type: binary
        ydk::YLeaf cmplsfrrfacrouteprotectedtunegresslsrid; //type: binary
        ydk::YLeaf cmplsfrrfacrouteprotectedtunstatus; //type: CmplsFrrFacRouteProtectedTunStatus
        ydk::YLeaf cmplsfrrfacrouteprotectingtunresvbw; //type: uint32
        ydk::YLeaf cmplsfrrfacrouteprotectingtunprotectiontype; //type: CmplsFrrFacRouteProtectingTunProtectionType
        class CmplsFrrFacRouteProtectedTunStatus;
        class CmplsFrrFacRouteProtectingTunProtectionType;

}; // CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry

class CISCOIETFFRRMIB::CmplsFrrScalars::CmplsFrrConstProtectionMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf oneToOneBackup;
        static const ydk::Enum::YLeaf facilityBackup;

};

class CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::CmplsFrrLogEventType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf protected_;

};

class CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::CmplsFrrFacRouteProtectedTunStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf partial;

};

class CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::CmplsFrrFacRouteProtectingTunProtectionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf linkProtection;
        static const ydk::Enum::YLeaf nodeProtection;

};


}
}

#endif /* _CISCO_IETF_FRR_MIB_ */

