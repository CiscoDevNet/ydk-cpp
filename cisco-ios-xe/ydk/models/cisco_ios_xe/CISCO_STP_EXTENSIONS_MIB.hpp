#ifndef _CISCO_STP_EXTENSIONS_MIB_
#define _CISCO_STP_EXTENSIONS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_STP_EXTENSIONS_MIB {

class CISCOSTPEXTENSIONSMIB : public ydk::Entity
{
    public:
        CISCOSTPEXTENSIONSMIB();
        ~CISCOSTPEXTENSIONSMIB();

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

        class StpxUplinkFastObjects; //type: CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects
        class StpxBackboneFastObjects; //type: CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects
        class StpxSpanningTreeObjects; //type: CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects
        class StpxMISTPObjects; //type: CISCOSTPEXTENSIONSMIB::StpxMISTPObjects
        class StpxLoopGuardObjects; //type: CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects
        class StpxFastStartObjects; //type: CISCOSTPEXTENSIONSMIB::StpxFastStartObjects
        class StpxBpduSkewingObjects; //type: CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects
        class StpxMSTObjects; //type: CISCOSTPEXTENSIONSMIB::StpxMSTObjects
        class StpxRSTPObjects; //type: CISCOSTPEXTENSIONSMIB::StpxRSTPObjects
        class StpxSMSTObjects; //type: CISCOSTPEXTENSIONSMIB::StpxSMSTObjects
        class StpxPVSTVlanTable; //type: CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable
        class StpxInconsistencyTable; //type: CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable
        class StpxRootGuardConfigTable; //type: CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable
        class StpxRootInconsistencyTable; //type: CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable
        class StpxMISTPInstanceTable; //type: CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable
        class StpxLoopGuardConfigTable; //type: CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable
        class StpxLoopInconsistencyTable; //type: CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable
        class StpxFastStartPortTable; //type: CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable
        class StpxFastStartOperModeTable; //type: CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable
        class StpxBpduSkewingTable; //type: CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable
        class StpxMSTInstanceTable; //type: CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable
        class StpxMSTInstanceEditTable; //type: CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable
        class StpxMSTPortTable; //type: CISCOSTPEXTENSIONSMIB::StpxMSTPortTable
        class StpxMSTPortRoleTable; //type: CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable
        class StpxRSTPPortTable; //type: CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable
        class StpxRSTPPortRoleTable; //type: CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable
        class StpxRPVSTPortTable; //type: CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable
        class StpxSMSTInstanceTable; //type: CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable
        class StpxSMSTInstanceEditTable; //type: CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable
        class StpxSMSTPortTable; //type: CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable

        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects> stpxuplinkfastobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects> stpxbackbonefastobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects> stpxspanningtreeobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxMISTPObjects> stpxmistpobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects> stpxloopguardobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxFastStartObjects> stpxfaststartobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects> stpxbpduskewingobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxMSTObjects> stpxmstobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxRSTPObjects> stpxrstpobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxSMSTObjects> stpxsmstobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable> stpxpvstvlantable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable> stpxinconsistencytable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable> stpxrootguardconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable> stpxrootinconsistencytable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable> stpxmistpinstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable> stpxloopguardconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable> stpxloopinconsistencytable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable> stpxfaststartporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable> stpxfaststartopermodetable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable> stpxbpduskewingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable> stpxmstinstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable> stpxmstinstanceedittable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxMSTPortTable> stpxmstporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable> stpxmstportroletable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable> stpxrstpporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable> stpxrstpportroletable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable> stpxrpvstporttable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable> stpxsmstinstancetable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable> stpxsmstinstanceedittable;
        std::shared_ptr<cisco_ios_xe::CISCO_STP_EXTENSIONS_MIB::CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable> stpxsmstporttable;
        
}; // CISCOSTPEXTENSIONSMIB


class CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects : public ydk::Entity
{
    public:
        StpxUplinkFastObjects();
        ~StpxUplinkFastObjects();

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

        ydk::YLeaf stpxuplinkfastenabled; //type: boolean
        ydk::YLeaf stpxuplinkfasttransitions; //type: uint32
        ydk::YLeaf stpxuplinkstationlearninggenrate; //type: int32
        ydk::YLeaf stpxuplinkstationlearningframes; //type: uint32
        ydk::YLeaf stpxuplinkfastoperenabled; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects


class CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects : public ydk::Entity
{
    public:
        StpxBackboneFastObjects();
        ~StpxBackboneFastObjects();

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

        ydk::YLeaf stpxbackbonefastenabled; //type: boolean
        ydk::YLeaf stpxbackbonefastininferiorbpdus; //type: uint32
        ydk::YLeaf stpxbackbonefastinrlqrequestpdus; //type: uint32
        ydk::YLeaf stpxbackbonefastinrlqresponsepdus; //type: uint32
        ydk::YLeaf stpxbackbonefastoutrlqrequestpdus; //type: uint32
        ydk::YLeaf stpxbackbonefastoutrlqresponsepdus; //type: uint32
        ydk::YLeaf stpxbackbonefastoperenabled; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects


class CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects : public ydk::Entity
{
    public:
        StpxSpanningTreeObjects();
        ~StpxSpanningTreeObjects();

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

        ydk::YLeaf stpxspanningtreetype; //type: StpxSpanningTreeType
        ydk::YLeaf stpxspanningtreepathcostmode; //type: StpxSpanningTreePathCostMode
        ydk::YLeaf stpxextendedsysidadminenabled; //type: boolean
        ydk::YLeaf stpxextendedsysidoperenabled; //type: boolean
        ydk::YLeaf stpxnotificationenable; //type: StpxNotificationEnable
        ydk::YLeaf stpxspanningtreepathcostopermode; //type: StpxSpanningTreePathCostOperMode
        class StpxSpanningTreeType;
        class StpxSpanningTreePathCostMode;
        class StpxSpanningTreePathCostOperMode;

}; // CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects


class CISCOSTPEXTENSIONSMIB::StpxMISTPObjects : public ydk::Entity
{
    public:
        StpxMISTPObjects();
        ~StpxMISTPObjects();

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

        ydk::YLeaf stpxmistpinstancenumber; //type: int32

}; // CISCOSTPEXTENSIONSMIB::StpxMISTPObjects


class CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects : public ydk::Entity
{
    public:
        StpxLoopGuardObjects();
        ~StpxLoopGuardObjects();

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

        ydk::YLeaf stpxloopguardglobaldefaultmode; //type: StpxLoopGuardGlobalDefaultMode
        class StpxLoopGuardGlobalDefaultMode;

}; // CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects


class CISCOSTPEXTENSIONSMIB::StpxFastStartObjects : public ydk::Entity
{
    public:
        StpxFastStartObjects();
        ~StpxFastStartObjects();

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

        ydk::YLeaf stpxfaststartbpduguardenable; //type: boolean
        ydk::YLeaf stpxfaststartbpdufilterenable; //type: boolean
        ydk::YLeaf stpxfaststartglobaldefaultmode; //type: StpxFastStartGlobalDefaultMode
        class StpxFastStartGlobalDefaultMode;

}; // CISCOSTPEXTENSIONSMIB::StpxFastStartObjects


class CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects : public ydk::Entity
{
    public:
        StpxBpduSkewingObjects();
        ~StpxBpduSkewingObjects();

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

        ydk::YLeaf stpxbpduskewingdetectionenable; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects


class CISCOSTPEXTENSIONSMIB::StpxMSTObjects : public ydk::Entity
{
    public:
        StpxMSTObjects();
        ~StpxMSTObjects();

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

        ydk::YLeaf stpxmstmaxinstancenumber; //type: int32
        ydk::YLeaf stpxmstregionname; //type: string
        ydk::YLeaf stpxmstregionrevision; //type: int32
        ydk::YLeaf stpxmstregioneditbufferstatus; //type: StpxMSTRegionEditBufferStatus
        ydk::YLeaf stpxmstregioneditbufferoperation; //type: StpxMSTRegionEditBufferOperation
        ydk::YLeaf stpxmstregioneditname; //type: string
        ydk::YLeaf stpxmstregioneditrevision; //type: int32
        ydk::YLeaf stpxmstmaxhopcount; //type: int32
        class StpxMSTRegionEditBufferStatus;
        class StpxMSTRegionEditBufferOperation;

}; // CISCOSTPEXTENSIONSMIB::StpxMSTObjects


class CISCOSTPEXTENSIONSMIB::StpxRSTPObjects : public ydk::Entity
{
    public:
        StpxRSTPObjects();
        ~StpxRSTPObjects();

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

        ydk::YLeaf stpxrstptransmitholdcount; //type: uint32

}; // CISCOSTPEXTENSIONSMIB::StpxRSTPObjects


class CISCOSTPEXTENSIONSMIB::StpxSMSTObjects : public ydk::Entity
{
    public:
        StpxSMSTObjects();
        ~StpxSMSTObjects();

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

        ydk::YLeaf stpxsmstmaxinstances; //type: uint32
        ydk::YLeaf stpxsmstmaxinstanceid; //type: uint32
        ydk::YLeaf stpxsmstregionrevision; //type: uint32
        ydk::YLeaf stpxsmstregioneditrevision; //type: uint32
        ydk::YLeaf stpxsmstmaxhopcount; //type: uint32
        ydk::YLeaf stpxsmstconfigdigest; //type: string
        ydk::YLeaf stpxsmstconfigprestandarddigest; //type: string

}; // CISCOSTPEXTENSIONSMIB::StpxSMSTObjects


class CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable : public ydk::Entity
{
    public:
        StpxPVSTVlanTable();
        ~StpxPVSTVlanTable();

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

        class StpxPVSTVlanEntry; //type: CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry

        ydk::YList stpxpvstvlanentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable


class CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry : public ydk::Entity
{
    public:
        StpxPVSTVlanEntry();
        ~StpxPVSTVlanEntry();

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

        ydk::YLeaf stpxpvstvlanindex; //type: int32
        ydk::YLeaf stpxpvstvlanenable; //type: StpxPVSTVlanEnable
        class StpxPVSTVlanEnable;

}; // CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry


class CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable : public ydk::Entity
{
    public:
        StpxInconsistencyTable();
        ~StpxInconsistencyTable();

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

        class StpxInconsistencyEntry; //type: CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry

        ydk::YList stpxinconsistencyentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable


class CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry : public ydk::Entity
{
    public:
        StpxInconsistencyEntry();
        ~StpxInconsistencyEntry();

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

        ydk::YLeaf stpxvlanindex; //type: int32
        ydk::YLeaf stpxportindex; //type: int32
        ydk::YLeaf stpxinconsistentstate; //type: StpxInconsistentState

}; // CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry


class CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable : public ydk::Entity
{
    public:
        StpxRootGuardConfigTable();
        ~StpxRootGuardConfigTable();

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

        class StpxRootGuardConfigEntry; //type: CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry

        ydk::YList stpxrootguardconfigentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable


class CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry : public ydk::Entity
{
    public:
        StpxRootGuardConfigEntry();
        ~StpxRootGuardConfigEntry();

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

        ydk::YLeaf stpxrootguardconfigportindex; //type: int32
        ydk::YLeaf stpxrootguardconfigenabled; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry


class CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable : public ydk::Entity
{
    public:
        StpxRootInconsistencyTable();
        ~StpxRootInconsistencyTable();

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

        class StpxRootInconsistencyEntry; //type: CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry

        ydk::YList stpxrootinconsistencyentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable


class CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry : public ydk::Entity
{
    public:
        StpxRootInconsistencyEntry();
        ~StpxRootInconsistencyEntry();

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

        ydk::YLeaf stpxrootinconsistencyindex; //type: int32
        ydk::YLeaf stpxrootinconsistencyportindex; //type: int32
        ydk::YLeaf stpxrootinconsistencystate; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry


class CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable : public ydk::Entity
{
    public:
        StpxMISTPInstanceTable();
        ~StpxMISTPInstanceTable();

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

        class StpxMISTPInstanceEntry; //type: CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry

        ydk::YList stpxmistpinstanceentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable


class CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry : public ydk::Entity
{
    public:
        StpxMISTPInstanceEntry();
        ~StpxMISTPInstanceEntry();

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

        ydk::YLeaf stpxmistpinstanceindex; //type: int32
        ydk::YLeaf stpxmistpinstanceenable; //type: boolean
        ydk::YLeaf stpxmistpinstancevlansmapped; //type: binary
        ydk::YLeaf stpxmistpinstancevlansmapped2k; //type: binary
        ydk::YLeaf stpxmistpinstancevlansmapped3k; //type: binary
        ydk::YLeaf stpxmistpinstancevlansmapped4k; //type: binary

}; // CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry


class CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable : public ydk::Entity
{
    public:
        StpxLoopGuardConfigTable();
        ~StpxLoopGuardConfigTable();

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

        class StpxLoopGuardConfigEntry; //type: CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry

        ydk::YList stpxloopguardconfigentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable


class CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry : public ydk::Entity
{
    public:
        StpxLoopGuardConfigEntry();
        ~StpxLoopGuardConfigEntry();

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

        ydk::YLeaf stpxloopguardconfigportindex; //type: int32
        ydk::YLeaf stpxloopguardconfigenabled; //type: boolean
        ydk::YLeaf stpxloopguardconfigmode; //type: StpxLoopGuardConfigMode
        class StpxLoopGuardConfigMode;

}; // CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry


class CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable : public ydk::Entity
{
    public:
        StpxLoopInconsistencyTable();
        ~StpxLoopInconsistencyTable();

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

        class StpxLoopInconsistencyEntry; //type: CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry

        ydk::YList stpxloopinconsistencyentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable


class CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry : public ydk::Entity
{
    public:
        StpxLoopInconsistencyEntry();
        ~StpxLoopInconsistencyEntry();

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

        ydk::YLeaf stpxloopinconsistencyindex; //type: int32
        ydk::YLeaf stpxloopinconsistencyportindex; //type: int32
        ydk::YLeaf stpxloopinconsistencystate; //type: boolean

}; // CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry


class CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable : public ydk::Entity
{
    public:
        StpxFastStartPortTable();
        ~StpxFastStartPortTable();

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

        class StpxFastStartPortEntry; //type: CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry

        ydk::YList stpxfaststartportentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable


class CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry : public ydk::Entity
{
    public:
        StpxFastStartPortEntry();
        ~StpxFastStartPortEntry();

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

        ydk::YLeaf stpxfaststartportindex; //type: int32
        ydk::YLeaf stpxfaststartportenable; //type: boolean
        ydk::YLeaf stpxfaststartportmode; //type: StpxFastStartPortMode
        ydk::YLeaf stpxfaststartportbpduguardmode; //type: StpxFastStartPortBpduGuardMode
        ydk::YLeaf stpxfaststartportbpdufiltermode; //type: StpxFastStartPortBpduFilterMode
        class StpxFastStartPortMode;
        class StpxFastStartPortBpduGuardMode;
        class StpxFastStartPortBpduFilterMode;

}; // CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry


class CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable : public ydk::Entity
{
    public:
        StpxFastStartOperModeTable();
        ~StpxFastStartOperModeTable();

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

        class StpxFastStartOperModeEntry; //type: CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry

        ydk::YList stpxfaststartopermodeentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable


class CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry : public ydk::Entity
{
    public:
        StpxFastStartOperModeEntry();
        ~StpxFastStartOperModeEntry();

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

        ydk::YLeaf stpxfaststartopermodeinstindex; //type: int32
        ydk::YLeaf stpxfaststartopermodeportindex; //type: int32
        ydk::YLeaf stpxfaststartopermode; //type: StpxFastStartOperMode
        class StpxFastStartOperMode;

}; // CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry


class CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable : public ydk::Entity
{
    public:
        StpxBpduSkewingTable();
        ~StpxBpduSkewingTable();

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

        class StpxBpduSkewingEntry; //type: CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry

        ydk::YList stpxbpduskewingentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable


class CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry : public ydk::Entity
{
    public:
        StpxBpduSkewingEntry();
        ~StpxBpduSkewingEntry();

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

        ydk::YLeaf stpxbpduskewinginstanceindex; //type: int32
        ydk::YLeaf stpxbpduskewingportindex; //type: int32
        ydk::YLeaf stpxbpduskewinglastskewduration; //type: uint32
        ydk::YLeaf stpxbpduskewingworstskewduration; //type: uint32
        ydk::YLeaf stpxbpduskewingworstskewtime; //type: uint32

}; // CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry


class CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable : public ydk::Entity
{
    public:
        StpxMSTInstanceTable();
        ~StpxMSTInstanceTable();

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

        class StpxMSTInstanceEntry; //type: CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry

        ydk::YList stpxmstinstanceentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable


class CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry : public ydk::Entity
{
    public:
        StpxMSTInstanceEntry();
        ~StpxMSTInstanceEntry();

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

        ydk::YLeaf stpxmstinstanceindex; //type: int32
        ydk::YLeaf stpxmstinstancevlansmapped; //type: binary
        ydk::YLeaf stpxmstinstancevlansmapped2k; //type: binary
        ydk::YLeaf stpxmstinstancevlansmapped3k; //type: binary
        ydk::YLeaf stpxmstinstancevlansmapped4k; //type: binary
        ydk::YLeaf stpxmstinstanceremaininghopcount; //type: int32

}; // CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry


class CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable : public ydk::Entity
{
    public:
        StpxMSTInstanceEditTable();
        ~StpxMSTInstanceEditTable();

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

        class StpxMSTInstanceEditEntry; //type: CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry

        ydk::YList stpxmstinstanceeditentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable


class CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry : public ydk::Entity
{
    public:
        StpxMSTInstanceEditEntry();
        ~StpxMSTInstanceEditEntry();

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

        ydk::YLeaf stpxmstinstanceeditindex; //type: int32
        ydk::YLeaf stpxmstinstanceeditvlansmap; //type: binary
        ydk::YLeaf stpxmstinstanceeditvlansmap2k; //type: binary
        ydk::YLeaf stpxmstinstanceeditvlansmap3k; //type: binary
        ydk::YLeaf stpxmstinstanceeditvlansmap4k; //type: binary

}; // CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry


class CISCOSTPEXTENSIONSMIB::StpxMSTPortTable : public ydk::Entity
{
    public:
        StpxMSTPortTable();
        ~StpxMSTPortTable();

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

        class StpxMSTPortEntry; //type: CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry

        ydk::YList stpxmstportentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxMSTPortTable


class CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry : public ydk::Entity
{
    public:
        StpxMSTPortEntry();
        ~StpxMSTPortEntry();

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

        ydk::YLeaf stpxmstportindex; //type: int32
        ydk::YLeaf stpxmstportadminlinktype; //type: StpxMSTPortAdminLinkType
        ydk::YLeaf stpxmstportoperlinktype; //type: StpxMSTPortOperLinkType
        ydk::YLeaf stpxmstportprotocolmigration; //type: boolean
        ydk::YLeaf stpxmstportstatus; //type: StpxMSTPortStatus
        class StpxMSTPortAdminLinkType;
        class StpxMSTPortOperLinkType;

}; // CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry


class CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable : public ydk::Entity
{
    public:
        StpxMSTPortRoleTable();
        ~StpxMSTPortRoleTable();

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

        class StpxMSTPortRoleEntry; //type: CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry

        ydk::YList stpxmstportroleentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable


class CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry : public ydk::Entity
{
    public:
        StpxMSTPortRoleEntry();
        ~StpxMSTPortRoleEntry();

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

        ydk::YLeaf stpxmstportroleinstanceindex; //type: int32
        ydk::YLeaf stpxmstportroleportindex; //type: int32
        ydk::YLeaf stpxmstportrolevalue; //type: StpxMSTPortRoleValue
        class StpxMSTPortRoleValue;

}; // CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry


class CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable : public ydk::Entity
{
    public:
        StpxRSTPPortTable();
        ~StpxRSTPPortTable();

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

        class StpxRSTPPortEntry; //type: CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry

        ydk::YList stpxrstpportentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable


class CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry : public ydk::Entity
{
    public:
        StpxRSTPPortEntry();
        ~StpxRSTPPortEntry();

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

        ydk::YLeaf stpxrstpportindex; //type: int32
        ydk::YLeaf stpxrstpportadminlinktype; //type: StpxRSTPPortAdminLinkType
        ydk::YLeaf stpxrstpportoperlinktype; //type: StpxRSTPPortOperLinkType
        ydk::YLeaf stpxrstpportprotocolmigration; //type: boolean
        class StpxRSTPPortAdminLinkType;
        class StpxRSTPPortOperLinkType;

}; // CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry


class CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable : public ydk::Entity
{
    public:
        StpxRSTPPortRoleTable();
        ~StpxRSTPPortRoleTable();

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

        class StpxRSTPPortRoleEntry; //type: CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry

        ydk::YList stpxrstpportroleentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable


class CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry : public ydk::Entity
{
    public:
        StpxRSTPPortRoleEntry();
        ~StpxRSTPPortRoleEntry();

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

        ydk::YLeaf stpxrstpportroleinstanceindex; //type: int32
        ydk::YLeaf stpxrstpportroleportindex; //type: int32
        ydk::YLeaf stpxrstpportrolevalue; //type: StpxRSTPPortRoleValue
        class StpxRSTPPortRoleValue;

}; // CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry


class CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable : public ydk::Entity
{
    public:
        StpxRPVSTPortTable();
        ~StpxRPVSTPortTable();

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

        class StpxRPVSTPortEntry; //type: CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry

        ydk::YList stpxrpvstportentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable


class CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry : public ydk::Entity
{
    public:
        StpxRPVSTPortEntry();
        ~StpxRPVSTPortEntry();

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

        ydk::YLeaf stpxrpvstportvlanindex; //type: int32
        ydk::YLeaf stpxrpvstportindex; //type: int32
        ydk::YLeaf stpxrpvstportstatus; //type: StpxRPVSTPortStatus

}; // CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry


class CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable : public ydk::Entity
{
    public:
        StpxSMSTInstanceTable();
        ~StpxSMSTInstanceTable();

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

        class StpxSMSTInstanceEntry; //type: CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry

        ydk::YList stpxsmstinstanceentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable


class CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry : public ydk::Entity
{
    public:
        StpxSMSTInstanceEntry();
        ~StpxSMSTInstanceEntry();

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

        ydk::YLeaf stpxsmstinstanceindex; //type: uint32
        ydk::YLeaf stpxsmstinstancevlansmapped1k2k; //type: binary
        ydk::YLeaf stpxsmstinstancevlansmapped3k4k; //type: binary
        ydk::YLeaf stpxsmstinstanceremaininghopcount; //type: int32
        ydk::YLeaf stpxsmstinstancecistregionalroot; //type: binary
        ydk::YLeaf stpxsmstinstancecistintrootcost; //type: uint32

}; // CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry


class CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable : public ydk::Entity
{
    public:
        StpxSMSTInstanceEditTable();
        ~StpxSMSTInstanceEditTable();

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

        class StpxSMSTInstanceEditEntry; //type: CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry

        ydk::YList stpxsmstinstanceeditentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable


class CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry : public ydk::Entity
{
    public:
        StpxSMSTInstanceEditEntry();
        ~StpxSMSTInstanceEditEntry();

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

        ydk::YLeaf stpxsmstinstanceeditindex; //type: uint32
        ydk::YLeaf stpxsmstinstanceeditvlansmap1k2k; //type: binary
        ydk::YLeaf stpxsmstinstanceeditvlansmap3k4k; //type: binary
        ydk::YLeaf stpxsmstinstanceeditrowstatus; //type: RowStatus

}; // CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry


class CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable : public ydk::Entity
{
    public:
        StpxSMSTPortTable();
        ~StpxSMSTPortTable();

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

        class StpxSMSTPortEntry; //type: CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry

        ydk::YList stpxsmstportentry;
        
}; // CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable


class CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry : public ydk::Entity
{
    public:
        StpxSMSTPortEntry();
        ~StpxSMSTPortEntry();

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

        ydk::YLeaf stpxsmstportindex; //type: int32
        ydk::YLeaf stpxsmstportstatus; //type: StpxSMSTPortStatus
        ydk::YLeaf stpxsmstportadminhellotime; //type: uint32
        ydk::YLeaf stpxsmstportconfigedhellotime; //type: uint32
        ydk::YLeaf stpxsmstportoperhellotime; //type: int32
        ydk::YLeaf stpxsmstportadminmstmode; //type: StpxSMSTPortAdminMSTMode
        ydk::YLeaf stpxsmstportopermstmode; //type: StpxSMSTPortOperMSTMode
        class StpxSMSTPortAdminMSTMode;
        class StpxSMSTPortOperMSTMode;

}; // CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry

class CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pvstPlus;
        static const ydk::Enum::YLeaf mistp;
        static const ydk::Enum::YLeaf mistpPvstPlus;
        static const ydk::Enum::YLeaf mst;
        static const ydk::Enum::YLeaf rapidPvstPlus;

        static int get_enum_value(const std::string & name) {
            if (name == "pvstPlus") return 1;
            if (name == "mistp") return 2;
            if (name == "mistpPvstPlus") return 3;
            if (name == "mst") return 4;
            if (name == "rapidPvstPlus") return 5;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreePathCostMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf short_;
        static const ydk::Enum::YLeaf long_;

        static int get_enum_value(const std::string & name) {
            if (name == "short") return 1;
            if (name == "long") return 2;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreePathCostOperMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf short_;
        static const ydk::Enum::YLeaf long_;

        static int get_enum_value(const std::string & name) {
            if (name == "short") return 1;
            if (name == "long") return 2;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::StpxLoopGuardGlobalDefaultMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::StpxFastStartGlobalDefaultMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTRegionEditBufferStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf released;
        static const ydk::Enum::YLeaf acquiredBySnmp;
        static const ydk::Enum::YLeaf acquiredByNonSnmp;

        static int get_enum_value(const std::string & name) {
            if (name == "released") return 1;
            if (name == "acquiredBySnmp") return 2;
            if (name == "acquiredByNonSnmp") return 3;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTRegionEditBufferOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf acquire;
        static const ydk::Enum::YLeaf releaseWithForce;
        static const ydk::Enum::YLeaf commit;
        static const ydk::Enum::YLeaf rollBack;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "acquire") return 2;
            if (name == "releaseWithForce") return 3;
            if (name == "commit") return 4;
            if (name == "rollBack") return 5;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::StpxPVSTVlanEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf notApplicable;

        static int get_enum_value(const std::string & name) {
            if (name == "enabled") return 1;
            if (name == "disabled") return 2;
            if (name == "notApplicable") return 3;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::StpxLoopGuardConfigMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            if (name == "default") return 3;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enableForTrunk;
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf network;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            if (name == "enableForTrunk") return 3;
            if (name == "default") return 4;
            if (name == "network") return 5;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortBpduGuardMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            if (name == "default") return 3;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortBpduFilterMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            if (name == "default") return 3;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::StpxFastStartOperMode : public ydk::Enum
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

class CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::StpxMSTPortAdminLinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf auto_;

        static int get_enum_value(const std::string & name) {
            if (name == "pointToPoint") return 1;
            if (name == "shared") return 2;
            if (name == "auto") return 3;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::StpxMSTPortOperLinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "pointToPoint") return 1;
            if (name == "shared") return 2;
            if (name == "other") return 3;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::StpxMSTPortRoleValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf designated;
        static const ydk::Enum::YLeaf alternate;
        static const ydk::Enum::YLeaf backUp;
        static const ydk::Enum::YLeaf boundary;
        static const ydk::Enum::YLeaf master;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "root") return 2;
            if (name == "designated") return 3;
            if (name == "alternate") return 4;
            if (name == "backUp") return 5;
            if (name == "boundary") return 6;
            if (name == "master") return 7;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::StpxRSTPPortAdminLinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf auto_;

        static int get_enum_value(const std::string & name) {
            if (name == "pointToPoint") return 1;
            if (name == "shared") return 2;
            if (name == "auto") return 3;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::StpxRSTPPortOperLinkType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf shared;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "pointToPoint") return 1;
            if (name == "shared") return 2;
            if (name == "other") return 3;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::StpxRSTPPortRoleValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf root;
        static const ydk::Enum::YLeaf designated;
        static const ydk::Enum::YLeaf alternate;
        static const ydk::Enum::YLeaf backUp;
        static const ydk::Enum::YLeaf boundary;
        static const ydk::Enum::YLeaf master;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 1;
            if (name == "root") return 2;
            if (name == "designated") return 3;
            if (name == "alternate") return 4;
            if (name == "backUp") return 5;
            if (name == "boundary") return 6;
            if (name == "master") return 7;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::StpxSMSTPortAdminMSTMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf preStandard;
        static const ydk::Enum::YLeaf auto_;

        static int get_enum_value(const std::string & name) {
            if (name == "preStandard") return 1;
            if (name == "auto") return 2;
            return -1;
        }
};

class CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::StpxSMSTPortOperMSTMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf preStandard;
        static const ydk::Enum::YLeaf standard;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "preStandard") return 2;
            if (name == "standard") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_STP_EXTENSIONS_MIB_ */

