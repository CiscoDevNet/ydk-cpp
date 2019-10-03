#ifndef _CISCO_IETF_BFD_MIB_
#define _CISCO_IETF_BFD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_BFD_MIB {

class CISCOIETFBFDMIB : public ydk::Entity
{
    public:
        CISCOIETFBFDMIB();
        ~CISCOIETFBFDMIB();

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

        class CiscoBfdScalarObjects; //type: CISCOIETFBFDMIB::CiscoBfdScalarObjects
        class CiscoBfdSessTable; //type: CISCOIETFBFDMIB::CiscoBfdSessTable
        class CiscoBfdSessMapTable; //type: CISCOIETFBFDMIB::CiscoBfdSessMapTable
        class CiscoBfdSessDiscMapTable; //type: CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable
        class CiscoBfdSessIpMapTable; //type: CISCOIETFBFDMIB::CiscoBfdSessIpMapTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdScalarObjects> ciscobfdscalarobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdSessTable> ciscobfdsesstable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdSessMapTable> ciscobfdsessmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable> ciscobfdsessdiscmaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdSessIpMapTable> ciscobfdsessipmaptable;
        
}; // CISCOIETFBFDMIB


class CISCOIETFBFDMIB::CiscoBfdScalarObjects : public ydk::Entity
{
    public:
        CiscoBfdScalarObjects();
        ~CiscoBfdScalarObjects();

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

        ydk::YLeaf ciscobfdadminstatus; //type: CiscoBfdAdminStatus
        ydk::YLeaf ciscobfdversionnumber; //type: uint32
        ydk::YLeaf ciscobfdsessnotificationsenable; //type: boolean
        class CiscoBfdAdminStatus;

}; // CISCOIETFBFDMIB::CiscoBfdScalarObjects


class CISCOIETFBFDMIB::CiscoBfdSessTable : public ydk::Entity
{
    public:
        CiscoBfdSessTable();
        ~CiscoBfdSessTable();

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

        class CiscoBfdSessEntry; //type: CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry

        ydk::YList ciscobfdsessentry;
        
}; // CISCOIETFBFDMIB::CiscoBfdSessTable


class CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry : public ydk::Entity
{
    public:
        CiscoBfdSessEntry();
        ~CiscoBfdSessEntry();

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

        ydk::YLeaf ciscobfdsessindex; //type: uint32
        ydk::YLeaf ciscobfdsessapplicationid; //type: uint32
        ydk::YLeaf ciscobfdsessdiscriminator; //type: uint32
        ydk::YLeaf ciscobfdsessremotediscr; //type: uint32
        ydk::YLeaf ciscobfdsessudpport; //type: uint16
        ydk::YLeaf ciscobfdsessstate; //type: CiscoBfdSessState
        ydk::YLeaf ciscobfdsessremoteheardflag; //type: boolean
        ydk::YLeaf ciscobfdsessdiag; //type: CiscoBfdDiag
        ydk::YLeaf ciscobfdsessopermode; //type: CiscoBfdSessOperMode
        ydk::YLeaf ciscobfdsessdemandmodedesiredflag; //type: boolean
        ydk::YLeaf ciscobfdsessechofuncmodedesiredflag; //type: boolean
        ydk::YLeaf ciscobfdsesscontrolplanindepflag; //type: boolean
        ydk::YLeaf ciscobfdsessaddrtype; //type: InetAddressType
        ydk::YLeaf ciscobfdsessaddr; //type: binary
        ydk::YLeaf ciscobfdsessdesiredmintxinterval; //type: uint32
        ydk::YLeaf ciscobfdsessreqminrxinterval; //type: uint32
        ydk::YLeaf ciscobfdsessreqminechorxinterval; //type: uint32
        ydk::YLeaf ciscobfdsessdetectmult; //type: uint32
        ydk::YLeaf ciscobfdsessstortype; //type: StorageType
        ydk::YLeaf ciscobfdsessrowstatus; //type: RowStatus
        ydk::YLeaf ciscobfdsessauthpresflag; //type: boolean
        ydk::YLeaf ciscobfdsessauthenticationtype; //type: CiscoBfdSessAuthenticationType
        ydk::YLeaf ciscobfdsessversionnumber; //type: uint32
        ydk::YLeaf ciscobfdsesstype; //type: CiscoBfdSessType
        ydk::YLeaf ciscobfdsessinterface; //type: int32
        ydk::YLeaf ciscobfdsessperfpktin; //type: uint32
        ydk::YLeaf ciscobfdsessperfpktout; //type: uint32
        ydk::YLeaf ciscobfdsessuptime; //type: uint32
        ydk::YLeaf ciscobfdsessperflastsessdowntime; //type: uint32
        ydk::YLeaf ciscobfdsessperflastcommlostdiag; //type: CiscoBfdDiag
        ydk::YLeaf ciscobfdsessperfsessupcount; //type: uint32
        ydk::YLeaf ciscobfdsessperfdisctime; //type: uint32
        ydk::YLeaf ciscobfdsessperfpktinhc; //type: uint64
        ydk::YLeaf ciscobfdsessperfpktouthc; //type: uint64
        class CiscoBfdSessState;
        class CiscoBfdSessOperMode;
        class CiscoBfdSessAuthenticationType;
        class CiscoBfdSessType;

}; // CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry


class CISCOIETFBFDMIB::CiscoBfdSessMapTable : public ydk::Entity
{
    public:
        CiscoBfdSessMapTable();
        ~CiscoBfdSessMapTable();

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

        class CiscoBfdSessMapEntry; //type: CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry

        ydk::YList ciscobfdsessmapentry;
        
}; // CISCOIETFBFDMIB::CiscoBfdSessMapTable


class CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry : public ydk::Entity
{
    public:
        CiscoBfdSessMapEntry();
        ~CiscoBfdSessMapEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::ciscobfdsessapplicationid)
        ydk::YLeaf ciscobfdsessapplicationid;
        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::ciscobfdsessdiscriminator)
        ydk::YLeaf ciscobfdsessdiscriminator;
        ydk::YLeaf ciscobfdsessaddrtype; //type: InetAddressType
        //type: binary (refers to cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::ciscobfdsessaddr)
        ydk::YLeaf ciscobfdsessaddr;
        ydk::YLeaf ciscobfdsessmapbfdindex; //type: uint32

}; // CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry


class CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable : public ydk::Entity
{
    public:
        CiscoBfdSessDiscMapTable();
        ~CiscoBfdSessDiscMapTable();

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

        class CiscoBfdSessDiscMapEntry; //type: CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry

        ydk::YList ciscobfdsessdiscmapentry;
        
}; // CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable


class CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry : public ydk::Entity
{
    public:
        CiscoBfdSessDiscMapEntry();
        ~CiscoBfdSessDiscMapEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::ciscobfdsessdiscriminator)
        ydk::YLeaf ciscobfdsessdiscriminator;
        ydk::YLeaf ciscobfdsessdiscmapindex; //type: uint32

}; // CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry


class CISCOIETFBFDMIB::CiscoBfdSessIpMapTable : public ydk::Entity
{
    public:
        CiscoBfdSessIpMapTable();
        ~CiscoBfdSessIpMapTable();

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

        class CiscoBfdSessIpMapEntry; //type: CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry

        ydk::YList ciscobfdsessipmapentry;
        
}; // CISCOIETFBFDMIB::CiscoBfdSessIpMapTable


class CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry : public ydk::Entity
{
    public:
        CiscoBfdSessIpMapEntry();
        ~CiscoBfdSessIpMapEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::ciscobfdsessinterface)
        ydk::YLeaf ciscobfdsessinterface;
        ydk::YLeaf ciscobfdsessaddrtype; //type: InetAddressType
        //type: binary (refers to cisco_ios_xe::CISCO_IETF_BFD_MIB::CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::ciscobfdsessaddr)
        ydk::YLeaf ciscobfdsessaddr;
        ydk::YLeaf ciscobfdsessipmapindex; //type: uint32

}; // CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry

class CiscoBfdDiag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noDiagnostic;
        static const ydk::Enum::YLeaf controlDetectionTimeExpired;
        static const ydk::Enum::YLeaf echoFunctionFailed;
        static const ydk::Enum::YLeaf neighborSignaledSessionDown;
        static const ydk::Enum::YLeaf forwardingPlaneReset;
        static const ydk::Enum::YLeaf pathDown;
        static const ydk::Enum::YLeaf concatenatedPathDown;
        static const ydk::Enum::YLeaf administrativelyDown;
        static const ydk::Enum::YLeaf reverseConcatenatedPathDown;

        static int get_enum_value(const std::string & name) {
            if (name == "noDiagnostic") return 0;
            if (name == "controlDetectionTimeExpired") return 1;
            if (name == "echoFunctionFailed") return 2;
            if (name == "neighborSignaledSessionDown") return 3;
            if (name == "forwardingPlaneReset") return 4;
            if (name == "pathDown") return 5;
            if (name == "concatenatedPathDown") return 6;
            if (name == "administrativelyDown") return 7;
            if (name == "reverseConcatenatedPathDown") return 8;
            return -1;
        }
};

class CISCOIETFBFDMIB::CiscoBfdScalarObjects::CiscoBfdAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            return -1;
        }
};

class CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adminDown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf failing;

        static int get_enum_value(const std::string & name) {
            if (name == "adminDown") return 1;
            if (name == "down") return 2;
            if (name == "init") return 3;
            if (name == "up") return 4;
            if (name == "failing") return 5;
            return -1;
        }
};

class CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessOperMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asyncModeWEchoFun;
        static const ydk::Enum::YLeaf asynchModeWOEchoFun;
        static const ydk::Enum::YLeaf demandModeWEchoFunction;
        static const ydk::Enum::YLeaf demandModeWOEchoFunction;

        static int get_enum_value(const std::string & name) {
            if (name == "asyncModeWEchoFun") return 1;
            if (name == "asynchModeWOEchoFun") return 2;
            if (name == "demandModeWEchoFunction") return 3;
            if (name == "demandModeWOEchoFunction") return 4;
            return -1;
        }
};

class CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessAuthenticationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf simplePassword;
        static const ydk::Enum::YLeaf keyedMD5;
        static const ydk::Enum::YLeaf meticulousKeyedMD5;
        static const ydk::Enum::YLeaf keyedSHA1;
        static const ydk::Enum::YLeaf meticulousKeyedSHA1;

        static int get_enum_value(const std::string & name) {
            if (name == "simplePassword") return 1;
            if (name == "keyedMD5") return 2;
            if (name == "meticulousKeyedMD5") return 3;
            if (name == "keyedSHA1") return 4;
            if (name == "meticulousKeyedSHA1") return 5;
            return -1;
        }
};

class CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf singleHop;
        static const ydk::Enum::YLeaf multiHop;

        static int get_enum_value(const std::string & name) {
            if (name == "singleHop") return 1;
            if (name == "multiHop") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IETF_BFD_MIB_ */

