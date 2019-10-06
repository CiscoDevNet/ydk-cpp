#ifndef _CISCO_PROCESS_MIB_
#define _CISCO_PROCESS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_PROCESS_MIB {

class CISCOPROCESSMIB : public ydk::Entity
{
    public:
        CISCOPROCESSMIB();
        ~CISCOPROCESSMIB();

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

        class CpmCPUHistory; //type: CISCOPROCESSMIB::CpmCPUHistory
        class CpmCPUTotalTable; //type: CISCOPROCESSMIB::CpmCPUTotalTable
        class CpmCoreTable; //type: CISCOPROCESSMIB::CpmCoreTable
        class CpmProcessTable; //type: CISCOPROCESSMIB::CpmProcessTable
        class CpmProcessExtRevTable; //type: CISCOPROCESSMIB::CpmProcessExtRevTable
        class CpmCPUThresholdTable; //type: CISCOPROCESSMIB::CpmCPUThresholdTable
        class CpmCPUHistoryTable; //type: CISCOPROCESSMIB::CpmCPUHistoryTable
        class CpmCPUProcessHistoryTable; //type: CISCOPROCESSMIB::CpmCPUProcessHistoryTable
        class CpmThreadTable; //type: CISCOPROCESSMIB::CpmThreadTable
        class CpmVirtualProcessTable; //type: CISCOPROCESSMIB::CpmVirtualProcessTable

        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUHistory> cpmcpuhistory;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUTotalTable> cpmcputotaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCoreTable> cpmcoretable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmProcessTable> cpmprocesstable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmProcessExtRevTable> cpmprocessextrevtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUThresholdTable> cpmcputhresholdtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUHistoryTable> cpmcpuhistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUProcessHistoryTable> cpmcpuprocesshistorytable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmThreadTable> cpmthreadtable;
        std::shared_ptr<cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmVirtualProcessTable> cpmvirtualprocesstable;
        
}; // CISCOPROCESSMIB


class CISCOPROCESSMIB::CpmCPUHistory : public ydk::Entity
{
    public:
        CpmCPUHistory();
        ~CpmCPUHistory();

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

        ydk::YLeaf cpmcpuhistorythreshold; //type: uint32
        ydk::YLeaf cpmcpuhistorysize; //type: uint32

}; // CISCOPROCESSMIB::CpmCPUHistory


class CISCOPROCESSMIB::CpmCPUTotalTable : public ydk::Entity
{
    public:
        CpmCPUTotalTable();
        ~CpmCPUTotalTable();

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

        class CpmCPUTotalEntry; //type: CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry

        ydk::YList cpmcputotalentry;
        
}; // CISCOPROCESSMIB::CpmCPUTotalTable


class CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry : public ydk::Entity
{
    public:
        CpmCPUTotalEntry();
        ~CpmCPUTotalEntry();

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

        ydk::YLeaf cpmcputotalindex; //type: uint32
        ydk::YLeaf cpmcputotalphysicalindex; //type: int32
        ydk::YLeaf cpmcputotal5sec; //type: uint32
        ydk::YLeaf cpmcputotal1min; //type: uint32
        ydk::YLeaf cpmcputotal5min; //type: uint32
        ydk::YLeaf cpmcputotal5secrev; //type: uint32
        ydk::YLeaf cpmcputotal1minrev; //type: uint32
        ydk::YLeaf cpmcputotal5minrev; //type: uint32
        ydk::YLeaf cpmcpumoninterval; //type: uint32
        ydk::YLeaf cpmcputotalmonintervalvalue; //type: uint32
        ydk::YLeaf cpmcpuinterruptmonintervalvalue; //type: uint32
        ydk::YLeaf cpmcpumemoryused; //type: uint32
        ydk::YLeaf cpmcpumemoryfree; //type: uint32
        ydk::YLeaf cpmcpumemorykernelreserved; //type: uint32
        ydk::YLeaf cpmcpumemorylowest; //type: uint32
        ydk::YLeaf cpmcpumemoryusedovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhcused; //type: uint64
        ydk::YLeaf cpmcpumemoryfreeovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhcfree; //type: uint64
        ydk::YLeaf cpmcpumemorykernelreservedovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhckernelreserved; //type: uint64
        ydk::YLeaf cpmcpumemorylowestovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhclowest; //type: uint64
        ydk::YLeaf cpmcpuloadavg1min; //type: uint32
        ydk::YLeaf cpmcpuloadavg5min; //type: uint32
        ydk::YLeaf cpmcpuloadavg15min; //type: uint32
        ydk::YLeaf cpmcpumemorycommitted; //type: uint32
        ydk::YLeaf cpmcpumemorycommittedovrflw; //type: uint32
        ydk::YLeaf cpmcpumemoryhccommitted; //type: uint64

}; // CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry


class CISCOPROCESSMIB::CpmCoreTable : public ydk::Entity
{
    public:
        CpmCoreTable();
        ~CpmCoreTable();

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

        class CpmCoreEntry; //type: CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry

        ydk::YList cpmcoreentry;
        
}; // CISCOPROCESSMIB::CpmCoreTable


class CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry : public ydk::Entity
{
    public:
        CpmCoreEntry();
        ~CpmCoreEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmcoreindex; //type: uint32
        ydk::YLeaf cpmcorephysicalindex; //type: int32
        ydk::YLeaf cpmcore5sec; //type: uint32
        ydk::YLeaf cpmcore1min; //type: uint32
        ydk::YLeaf cpmcore5min; //type: uint32
        ydk::YLeaf cpmcoreloadavg1min; //type: uint32
        ydk::YLeaf cpmcoreloadavg5min; //type: uint32
        ydk::YLeaf cpmcoreloadavg15min; //type: uint32

}; // CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry


class CISCOPROCESSMIB::CpmProcessTable : public ydk::Entity
{
    public:
        CpmProcessTable();
        ~CpmProcessTable();

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

        class CpmProcessEntry; //type: CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry

        ydk::YList cpmprocessentry;
        
}; // CISCOPROCESSMIB::CpmProcessTable


class CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry : public ydk::Entity
{
    public:
        CpmProcessEntry();
        ~CpmProcessEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmprocesspid; //type: uint32
        ydk::YLeaf cpmprocessname; //type: string
        ydk::YLeaf cpmprocessusecs; //type: uint32
        ydk::YLeaf cpmprocesstimecreated; //type: uint32
        ydk::YLeaf cpmprocessaverageusecs; //type: uint32
        ydk::YLeaf cpmprocextmemallocated; //type: uint32
        ydk::YLeaf cpmprocextmemfreed; //type: uint32
        ydk::YLeaf cpmprocextinvoked; //type: uint32
        ydk::YLeaf cpmprocextruntime; //type: uint32
        ydk::YLeaf cpmprocextutil5sec; //type: uint32
        ydk::YLeaf cpmprocextutil1min; //type: uint32
        ydk::YLeaf cpmprocextutil5min; //type: uint32
        ydk::YLeaf cpmprocextpriority; //type: CpmProcExtPriority
        class CpmProcExtPriority;

}; // CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry


class CISCOPROCESSMIB::CpmProcessExtRevTable : public ydk::Entity
{
    public:
        CpmProcessExtRevTable();
        ~CpmProcessExtRevTable();

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

        class CpmProcessExtRevEntry; //type: CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry

        ydk::YList cpmprocessextreventry;
        
}; // CISCOPROCESSMIB::CpmProcessExtRevTable


class CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry : public ydk::Entity
{
    public:
        CpmProcessExtRevEntry();
        ~CpmProcessExtRevEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::cpmprocesspid)
        ydk::YLeaf cpmprocesspid;
        ydk::YLeaf cpmprocextmemallocatedrev; //type: uint32
        ydk::YLeaf cpmprocextmemfreedrev; //type: uint32
        ydk::YLeaf cpmprocextinvokedrev; //type: uint32
        ydk::YLeaf cpmprocextruntimerev; //type: uint32
        ydk::YLeaf cpmprocextutil5secrev; //type: uint32
        ydk::YLeaf cpmprocextutil1minrev; //type: uint32
        ydk::YLeaf cpmprocextutil5minrev; //type: uint32
        ydk::YLeaf cpmprocextpriorityrev; //type: CpmProcExtPriorityRev
        ydk::YLeaf cpmprocesstype; //type: CpmProcessType
        ydk::YLeaf cpmprocessrespawn; //type: uint32
        ydk::YLeaf cpmprocessrespawncount; //type: uint32
        ydk::YLeaf cpmprocessrespawnafterlastpatch; //type: uint32
        ydk::YLeaf cpmprocessmemorycore; //type: CpmProcessMemoryCore
        ydk::YLeaf cpmprocesslastrestartuser; //type: string
        ydk::YLeaf cpmprocesstextsegmentsize; //type: uint32
        ydk::YLeaf cpmprocessdatasegmentsize; //type: uint32
        ydk::YLeaf cpmprocessstacksize; //type: uint32
        ydk::YLeaf cpmprocessdynamicmemorysize; //type: uint32
        ydk::YLeaf cpmprocextmemallocatedrevovrflw; //type: uint32
        ydk::YLeaf cpmprocexthcmemallocatedrev; //type: uint64
        ydk::YLeaf cpmprocextmemfreedrevovrflw; //type: uint32
        ydk::YLeaf cpmprocexthcmemfreedrev; //type: uint64
        ydk::YLeaf cpmprocesstextsegmentsizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshctextsegmentsize; //type: uint64
        ydk::YLeaf cpmprocessdatasegmentsizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshcdatasegmentsize; //type: uint64
        ydk::YLeaf cpmprocessstacksizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshcstacksize; //type: uint64
        ydk::YLeaf cpmprocessdynamicmemorysizeovrflw; //type: uint32
        ydk::YLeaf cpmprocesshcdynamicmemorysize; //type: uint64
        class CpmProcExtPriorityRev;
        class CpmProcessType;
        class CpmProcessMemoryCore;

}; // CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry


class CISCOPROCESSMIB::CpmCPUThresholdTable : public ydk::Entity
{
    public:
        CpmCPUThresholdTable();
        ~CpmCPUThresholdTable();

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

        class CpmCPUThresholdEntry; //type: CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry

        ydk::YList cpmcputhresholdentry;
        
}; // CISCOPROCESSMIB::CpmCPUThresholdTable


class CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry : public ydk::Entity
{
    public:
        CpmCPUThresholdEntry();
        ~CpmCPUThresholdEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmcputhresholdclass; //type: CpmCPUThresholdClass
        ydk::YLeaf cpmcpurisingthresholdvalue; //type: uint32
        ydk::YLeaf cpmcpurisingthresholdperiod; //type: uint32
        ydk::YLeaf cpmcpufallingthresholdvalue; //type: uint32
        ydk::YLeaf cpmcpufallingthresholdperiod; //type: uint32
        ydk::YLeaf cpmcputhresholdentrystatus; //type: RowStatus
        class CpmCPUThresholdClass;

}; // CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry


class CISCOPROCESSMIB::CpmCPUHistoryTable : public ydk::Entity
{
    public:
        CpmCPUHistoryTable();
        ~CpmCPUHistoryTable();

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

        class CpmCPUHistoryEntry; //type: CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry

        ydk::YList cpmcpuhistoryentry;
        
}; // CISCOPROCESSMIB::CpmCPUHistoryTable


class CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry : public ydk::Entity
{
    public:
        CpmCPUHistoryEntry();
        ~CpmCPUHistoryEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        ydk::YLeaf cpmcpuhistoryreportid; //type: uint32
        ydk::YLeaf cpmcpuhistoryreportsize; //type: uint32
        ydk::YLeaf cpmcpuhistorytotalutil; //type: uint32
        ydk::YLeaf cpmcpuhistoryinterruptutil; //type: uint32
        ydk::YLeaf cpmcpuhistorycreatedtime; //type: uint32

}; // CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry


class CISCOPROCESSMIB::CpmCPUProcessHistoryTable : public ydk::Entity
{
    public:
        CpmCPUProcessHistoryTable();
        ~CpmCPUProcessHistoryTable();

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

        class CpmCPUProcessHistoryEntry; //type: CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry

        ydk::YList cpmcpuprocesshistoryentry;
        
}; // CISCOPROCESSMIB::CpmCPUProcessHistoryTable


class CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry : public ydk::Entity
{
    public:
        CpmCPUProcessHistoryEntry();
        ~CpmCPUProcessHistoryEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::cpmcpuhistoryreportid)
        ydk::YLeaf cpmcpuhistoryreportid;
        ydk::YLeaf cpmcpuprocesshistoryindex; //type: uint32
        ydk::YLeaf cpmcpuhistoryprocid; //type: uint32
        ydk::YLeaf cpmcpuhistoryprocname; //type: string
        ydk::YLeaf cpmcpuhistoryproccreated; //type: uint32
        ydk::YLeaf cpmcpuhistoryprocutil; //type: uint32

}; // CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry


class CISCOPROCESSMIB::CpmThreadTable : public ydk::Entity
{
    public:
        CpmThreadTable();
        ~CpmThreadTable();

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

        class CpmThreadEntry; //type: CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry

        ydk::YList cpmthreadentry;
        
}; // CISCOPROCESSMIB::CpmThreadTable


class CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry : public ydk::Entity
{
    public:
        CpmThreadEntry();
        ~CpmThreadEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::cpmprocesspid)
        ydk::YLeaf cpmprocesspid;
        ydk::YLeaf cpmthreadid; //type: uint32
        ydk::YLeaf cpmthreadname; //type: string
        ydk::YLeaf cpmthreadpriority; //type: uint32
        ydk::YLeaf cpmthreadstate; //type: CpmThreadState
        ydk::YLeaf cpmthreadblockingprocess; //type: string
        ydk::YLeaf cpmthreadcpuutilization; //type: uint32
        ydk::YLeaf cpmthreadstacksize; //type: uint32
        ydk::YLeaf cpmthreadstacksizeovrflw; //type: uint32
        ydk::YLeaf cpmthreadhcstacksize; //type: uint64
        class CpmThreadState;

}; // CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry


class CISCOPROCESSMIB::CpmVirtualProcessTable : public ydk::Entity
{
    public:
        CpmVirtualProcessTable();
        ~CpmVirtualProcessTable();

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

        class CpmVirtualProcessEntry; //type: CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry

        ydk::YList cpmvirtualprocessentry;
        
}; // CISCOPROCESSMIB::CpmVirtualProcessTable


class CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry : public ydk::Entity
{
    public:
        CpmVirtualProcessEntry();
        ~CpmVirtualProcessEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::cpmcputotalindex)
        ydk::YLeaf cpmcputotalindex;
        //type: uint32 (refers to cisco_ios_xe::CISCO_PROCESS_MIB::CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::cpmprocesspid)
        ydk::YLeaf cpmprocesspid;
        ydk::YLeaf cpmvirtualprocessid; //type: uint32
        ydk::YLeaf cpmvirtualprocessname; //type: string
        ydk::YLeaf cpmvirtualprocessutil5sec; //type: uint32
        ydk::YLeaf cpmvirtualprocessutil1min; //type: uint32
        ydk::YLeaf cpmvirtualprocessutil5min; //type: uint32
        ydk::YLeaf cpmvirtualprocessmemallocated; //type: uint32
        ydk::YLeaf cpmvirtualprocessmemfreed; //type: uint32
        ydk::YLeaf cpmvirtualprocessinvokecount; //type: uint32
        ydk::YLeaf cpmvirtualprocessruntime; //type: uint32
        ydk::YLeaf cpmvirtualprocessmemallocatedovrflw; //type: uint32
        ydk::YLeaf cpmvirtualprocesshcmemallocated; //type: uint64
        ydk::YLeaf cpmvirtualprocessmemfreedovrflw; //type: uint32
        ydk::YLeaf cpmvirtualprocesshcmemfreed; //type: uint64

}; // CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry

class CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::CpmProcExtPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf notAssigned;

        static int get_enum_value(const std::string & name) {
            if (name == "critical") return 1;
            if (name == "high") return 2;
            if (name == "normal") return 3;
            if (name == "low") return 4;
            if (name == "notAssigned") return 5;
            return -1;
        }
};

class CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcExtPriorityRev : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf low;
        static const ydk::Enum::YLeaf notAssigned;

        static int get_enum_value(const std::string & name) {
            if (name == "critical") return 1;
            if (name == "high") return 2;
            if (name == "normal") return 3;
            if (name == "low") return 4;
            if (name == "notAssigned") return 5;
            return -1;
        }
};

class CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf posix;
        static const ydk::Enum::YLeaf ios;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "other") return 1;
            if (name == "posix") return 2;
            if (name == "ios") return 3;
            return -1;
        }
};

class CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessMemoryCore : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf mainmem;
        static const ydk::Enum::YLeaf mainmemSharedmem;
        static const ydk::Enum::YLeaf mainmemText;
        static const ydk::Enum::YLeaf mainmemTextSharedmem;
        static const ydk::Enum::YLeaf sharedmem;
        static const ydk::Enum::YLeaf sparse;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "other") return 1;
            if (name == "mainmem") return 2;
            if (name == "mainmemSharedmem") return 3;
            if (name == "mainmemText") return 4;
            if (name == "mainmemTextSharedmem") return 5;
            if (name == "sharedmem") return 6;
            if (name == "sparse") return 7;
            if (name == "off") return 8;
            return -1;
        }
};

class CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::CpmCPUThresholdClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf total;
        static const ydk::Enum::YLeaf interrupt;
        static const ydk::Enum::YLeaf process;

        static int get_enum_value(const std::string & name) {
            if (name == "total") return 1;
            if (name == "interrupt") return 2;
            if (name == "process") return 3;
            return -1;
        }
};

class CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf dead;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf stopped;
        static const ydk::Enum::YLeaf send;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf reply;
        static const ydk::Enum::YLeaf stack;
        static const ydk::Enum::YLeaf waitpage;
        static const ydk::Enum::YLeaf sigsuspend;
        static const ydk::Enum::YLeaf sigwaitinfo;
        static const ydk::Enum::YLeaf nanosleep;
        static const ydk::Enum::YLeaf mutex;
        static const ydk::Enum::YLeaf condvar;
        static const ydk::Enum::YLeaf join;
        static const ydk::Enum::YLeaf intr;
        static const ydk::Enum::YLeaf sem;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "dead") return 2;
            if (name == "running") return 3;
            if (name == "ready") return 4;
            if (name == "stopped") return 5;
            if (name == "send") return 6;
            if (name == "receive") return 7;
            if (name == "reply") return 8;
            if (name == "stack") return 9;
            if (name == "waitpage") return 10;
            if (name == "sigsuspend") return 11;
            if (name == "sigwaitinfo") return 12;
            if (name == "nanosleep") return 13;
            if (name == "mutex") return 14;
            if (name == "condvar") return 15;
            if (name == "join") return 16;
            if (name == "intr") return 17;
            if (name == "sem") return 18;
            return -1;
        }
};


}
}

#endif /* _CISCO_PROCESS_MIB_ */

