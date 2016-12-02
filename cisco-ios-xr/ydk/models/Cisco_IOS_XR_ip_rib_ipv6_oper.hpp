#ifndef _CISCO_IOS_XR_IP_RIB_IPV6_OPER_
#define _CISCO_IOS_XR_IP_RIB_IPV6_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rib_ipv6_oper {

class Ipv6Rib : public Entity
{
    public:
        Ipv6Rib();
        ~Ipv6Rib();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class RibTableIds : public Entity
    {
        public:
            RibTableIds();
            ~RibTableIds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RibTableId : public Entity
        {
            public:
                RibTableId();
                ~RibTableId();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value tableid; //type: string


            class SummaryProtos : public Entity
            {
                public:
                    SummaryProtos();
                    ~SummaryProtos();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SummaryProto : public Entity
                {
                    public:
                        SummaryProto();
                        ~SummaryProto();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value protoid; //type: int32
                        Value name; //type: string
                        Value instance; //type: string


                    class ProtoRouteCount : public Entity
                    {
                        public:
                            ProtoRouteCount();
                            ~ProtoRouteCount();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount


                    class RtypeNone : public Entity
                    {
                        public:
                            RtypeNone();
                            ~RtypeNone();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone


                    class RtypeOther : public Entity
                    {
                        public:
                            RtypeOther();
                            ~RtypeOther();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther


                    class RtypeOspfIntra : public Entity
                    {
                        public:
                            RtypeOspfIntra();
                            ~RtypeOspfIntra();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra


                    class RtypeOspfInter : public Entity
                    {
                        public:
                            RtypeOspfInter();
                            ~RtypeOspfInter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter


                    class RtypeOspfExtern1 : public Entity
                    {
                        public:
                            RtypeOspfExtern1();
                            ~RtypeOspfExtern1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1


                    class RtypeOspfExtern2 : public Entity
                    {
                        public:
                            RtypeOspfExtern2();
                            ~RtypeOspfExtern2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2


                    class RtypeIsisSum : public Entity
                    {
                        public:
                            RtypeIsisSum();
                            ~RtypeIsisSum();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum


                    class RtypeIsisL1 : public Entity
                    {
                        public:
                            RtypeIsisL1();
                            ~RtypeIsisL1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1


                    class RtypeIsisL2 : public Entity
                    {
                        public:
                            RtypeIsisL2();
                            ~RtypeIsisL2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2


                    class RtypeIsisL1Ia : public Entity
                    {
                        public:
                            RtypeIsisL1Ia();
                            ~RtypeIsisL1Ia();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia


                    class RtypeBgpInt : public Entity
                    {
                        public:
                            RtypeBgpInt();
                            ~RtypeBgpInt();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt


                    class RtypeBgpExt : public Entity
                    {
                        public:
                            RtypeBgpExt();
                            ~RtypeBgpExt();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt


                    class RtypeBgpLoc : public Entity
                    {
                        public:
                            RtypeBgpLoc();
                            ~RtypeBgpLoc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc


                    class RtypeOspfNssa1 : public Entity
                    {
                        public:
                            RtypeOspfNssa1();
                            ~RtypeOspfNssa1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1


                    class RtypeOspfNssa2 : public Entity
                    {
                        public:
                            RtypeOspfNssa2();
                            ~RtypeOspfNssa2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2


                    class RtypeIgrp2Int : public Entity
                    {
                        public:
                            RtypeIgrp2Int();
                            ~RtypeIgrp2Int();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int


                    class RtypeIgrp2Ext : public Entity
                    {
                        public:
                            RtypeIgrp2Ext();
                            ~RtypeIgrp2Ext();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext


                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount> proto_route_count;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt> rtype_bgp_ext;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt> rtype_bgp_int;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc> rtype_bgp_loc;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext> rtype_igrp2_ext;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int> rtype_igrp2_int;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1> rtype_isis_l1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia> rtype_isis_l1_ia;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2> rtype_isis_l2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum> rtype_isis_sum;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone> rtype_none;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1> rtype_ospf_extern1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2> rtype_ospf_extern2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter> rtype_ospf_inter;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra> rtype_ospf_intra;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1> rtype_ospf_nssa1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2> rtype_ospf_nssa2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther> rtype_other;


                }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos::SummaryProto> > summary_proto;


            }; // Ipv6Rib::RibTableIds::RibTableId::SummaryProtos


            class RibTableItfHndls : public Entity
            {
                public:
                    RibTableItfHndls();
                    ~RibTableItfHndls();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RibTableItfHndl : public Entity
                {
                    public:
                        RibTableItfHndl();
                        ~RibTableItfHndl();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value handle; //type: int32


                    class ItfRoute : public Entity
                    {
                        public:
                            ItfRoute();
                            ~ItfRoute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string
                            Value prefix; //type: string
                            Value prefix_length_xr; //type: uint8
                            Value route_version; //type: uint32
                            Value protocol_id; //type: uint32
                            Value protocol_name; //type: string
                            Value instance; //type: string
                            Value client_id; //type: uint32
                            Value route_type; //type: uint16
                            Value priority; //type: uint8
                            Value svd_type; //type: uint8
                            Value flags; //type: uint32
                            Value extended_flags; //type: uint64
                            Value tag; //type: uint32
                            Value distance; //type: uint32
                            Value diversion_distance; //type: uint32
                            Value metric; //type: uint32
                            Value paths_count; //type: uint32
                            Value attribute_identity; //type: uint32
                            Value traffic_index; //type: uint8
                            Value route_precedence; //type: uint8
                            Value qos_group; //type: uint8
                            Value flow_tag; //type: uint8
                            Value fwd_class; //type: uint8
                            Value pic_count; //type: uint8
                            Value active; //type: boolean
                            Value diversion; //type: boolean
                            Value diversion_proto_name; //type: string
                            Value route_age; //type: uint32
                            Value route_label; //type: uint32
                            Value version; //type: uint32
                            Value tbl_version; //type: uint64
                            Value route_modify_time; //type: uint64


                        class RoutePath : public Entity
                        {
                            public:
                                RoutePath();
                                ~RoutePath();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Ipv6RibEdmPath : public Entity
                            {
                                public:
                                    Ipv6RibEdmPath();
                                    ~Ipv6RibEdmPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value information_source; //type: string
                                    Value v6_nexthop; //type: string
                                    Value interface_name; //type: string
                                    Value metric; //type: uint32
                                    Value load_metric; //type: uint32
                                    Value flags64; //type: uint64
                                    Value flags; //type: uint16
                                    Value private_flags; //type: uint16
                                    Value looped; //type: boolean
                                    Value next_hop_table_id; //type: uint32
                                    Value next_hop_vrf_name; //type: string
                                    Value next_hop_table_name; //type: string
                                    Value next_hop_afi; //type: uint32
                                    Value next_hop_safi; //type: uint32
                                    Value route_label; //type: uint32
                                    Value tunnel_id; //type: uint32
                                    Value pathid; //type: uint32
                                    Value backup_pathid; //type: uint32
                                    Value ref_cnt_of_backup; //type: uint32
                                    Value number_of_extended_communities; //type: uint32
                                    Value mvpn_present; //type: boolean
                                    Value path_rt_present; //type: boolean
                                    Value vrf_import_rt_present; //type: boolean
                                    Value source_asrt_present; //type: boolean
                                    Value source_rd_present; //type: boolean
                                    Value segmented_nexthop_present; //type: boolean
                                    Value next_hop_id; //type: uint32
                                    Value next_hop_id_refcount; //type: uint32
                                    Value ospf_area_id; //type: string
                                    Value has_labelstk; //type: boolean
                                    Value num_labels; //type: uint8
                                    Value binding_label; //type: uint32
                                    Value nhid_feid; //type: uint64
                                    Value mpls_feid; //type: uint64
                                    ValueList remote_backup_addr; //type: list of  string
                                    ValueList labelstk; //type: list of  uint32




                            }; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                        }; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath


                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath> route_path;


                    }; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute> > itf_route;


                }; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl> > rib_table_itf_hndl;


            }; // Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls


                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::RibTableItfHndls> rib_table_itf_hndls;
                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId::SummaryProtos> summary_protos;


        }; // Ipv6Rib::RibTableIds::RibTableId


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds::RibTableId> > rib_table_id;


    }; // Ipv6Rib::RibTableIds


    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vrf_name; //type: string


            class Afs : public Entity
            {
                public:
                    Afs();
                    ~Afs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Af : public Entity
                {
                    public:
                        Af();
                        ~Af();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value af_name; //type: string


                    class Safs : public Entity
                    {
                        public:
                            Safs();
                            ~Safs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Saf : public Entity
                        {
                            public:
                                Saf();
                                ~Saf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value saf_name; //type: string


                            class IpRibRouteTableNames : public Entity
                            {
                                public:
                                    IpRibRouteTableNames();
                                    ~IpRibRouteTableNames();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class IpRibRouteTableName : public Entity
                                {
                                    public:
                                        IpRibRouteTableName();
                                        ~IpRibRouteTableName();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value route_table_name; //type: string


                                    class DestinationKw : public Entity
                                    {
                                        public:
                                            DestinationKw();
                                            ~DestinationKw();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class DestQRoutes : public Entity
                                        {
                                            public:
                                                DestQRoutes();
                                                ~DestQRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class DestQRoute : public Entity
                                            {
                                                public:
                                                    DestQRoute();
                                                    ~DestQRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value address; //type: string
                                                    Value prefix_length; //type: uint8
                                                    Value prefix; //type: string
                                                    Value prefix_length_xr; //type: uint8
                                                    Value route_version; //type: uint32
                                                    Value protocol_id; //type: uint32
                                                    Value protocol_name; //type: string
                                                    Value instance; //type: string
                                                    Value client_id; //type: uint32
                                                    Value route_type; //type: uint16
                                                    Value priority; //type: uint8
                                                    Value svd_type; //type: uint8
                                                    Value flags; //type: uint32
                                                    Value extended_flags; //type: uint64
                                                    Value tag; //type: uint32
                                                    Value distance; //type: uint32
                                                    Value diversion_distance; //type: uint32
                                                    Value metric; //type: uint32
                                                    Value paths_count; //type: uint32
                                                    Value attribute_identity; //type: uint32
                                                    Value traffic_index; //type: uint8
                                                    Value route_precedence; //type: uint8
                                                    Value qos_group; //type: uint8
                                                    Value flow_tag; //type: uint8
                                                    Value fwd_class; //type: uint8
                                                    Value pic_count; //type: uint8
                                                    Value active; //type: boolean
                                                    Value diversion; //type: boolean
                                                    Value diversion_proto_name; //type: string
                                                    Value route_age; //type: uint32
                                                    Value route_label; //type: uint32
                                                    Value version; //type: uint32
                                                    Value tbl_version; //type: uint64
                                                    Value route_modify_time; //type: uint64


                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class Ipv6RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv6RibEdmPath();
                                                            ~Ipv6RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value information_source; //type: string
                                                            Value v6_nexthop; //type: string
                                                            Value interface_name; //type: string
                                                            Value metric; //type: uint32
                                                            Value load_metric; //type: uint32
                                                            Value flags64; //type: uint64
                                                            Value flags; //type: uint16
                                                            Value private_flags; //type: uint16
                                                            Value looped; //type: boolean
                                                            Value next_hop_table_id; //type: uint32
                                                            Value next_hop_vrf_name; //type: string
                                                            Value next_hop_table_name; //type: string
                                                            Value next_hop_afi; //type: uint32
                                                            Value next_hop_safi; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value tunnel_id; //type: uint32
                                                            Value pathid; //type: uint32
                                                            Value backup_pathid; //type: uint32
                                                            Value ref_cnt_of_backup; //type: uint32
                                                            Value number_of_extended_communities; //type: uint32
                                                            Value mvpn_present; //type: boolean
                                                            Value path_rt_present; //type: boolean
                                                            Value vrf_import_rt_present; //type: boolean
                                                            Value source_asrt_present; //type: boolean
                                                            Value source_rd_present; //type: boolean
                                                            Value segmented_nexthop_present; //type: boolean
                                                            Value next_hop_id; //type: uint32
                                                            Value next_hop_id_refcount; //type: uint32
                                                            Value ospf_area_id; //type: string
                                                            Value has_labelstk; //type: boolean
                                                            Value num_labels; //type: uint8
                                                            Value binding_label; //type: uint32
                                                            Value nhid_feid; //type: uint64
                                                            Value mpls_feid; //type: uint64
                                                            ValueList remote_backup_addr; //type: list of  string
                                                            ValueList labelstk; //type: list of  uint32




                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath> route_path;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute> > dest_q_route;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes


                                        class DestBackupRoutes : public Entity
                                        {
                                            public:
                                                DestBackupRoutes();
                                                ~DestBackupRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class DestBackupRoute : public Entity
                                            {
                                                public:
                                                    DestBackupRoute();
                                                    ~DestBackupRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value address; //type: string
                                                    Value prefix_length; //type: uint8
                                                    Value prefix; //type: string
                                                    Value prefix_length_xr; //type: uint8
                                                    Value route_version; //type: uint32
                                                    Value protocol_id; //type: uint32
                                                    Value protocol_name; //type: string
                                                    Value instance; //type: string
                                                    Value client_id; //type: uint32
                                                    Value route_type; //type: uint16
                                                    Value priority; //type: uint8
                                                    Value svd_type; //type: uint8
                                                    Value flags; //type: uint32
                                                    Value extended_flags; //type: uint64
                                                    Value tag; //type: uint32
                                                    Value distance; //type: uint32
                                                    Value diversion_distance; //type: uint32
                                                    Value metric; //type: uint32
                                                    Value paths_count; //type: uint32
                                                    Value attribute_identity; //type: uint32
                                                    Value traffic_index; //type: uint8
                                                    Value route_precedence; //type: uint8
                                                    Value qos_group; //type: uint8
                                                    Value flow_tag; //type: uint8
                                                    Value fwd_class; //type: uint8
                                                    Value pic_count; //type: uint8
                                                    Value active; //type: boolean
                                                    Value diversion; //type: boolean
                                                    Value diversion_proto_name; //type: string
                                                    Value route_age; //type: uint32
                                                    Value route_label; //type: uint32
                                                    Value version; //type: uint32
                                                    Value tbl_version; //type: uint64
                                                    Value route_modify_time; //type: uint64


                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class Ipv6RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv6RibEdmPath();
                                                            ~Ipv6RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value information_source; //type: string
                                                            Value v6_nexthop; //type: string
                                                            Value interface_name; //type: string
                                                            Value metric; //type: uint32
                                                            Value load_metric; //type: uint32
                                                            Value flags64; //type: uint64
                                                            Value flags; //type: uint16
                                                            Value private_flags; //type: uint16
                                                            Value looped; //type: boolean
                                                            Value next_hop_table_id; //type: uint32
                                                            Value next_hop_vrf_name; //type: string
                                                            Value next_hop_table_name; //type: string
                                                            Value next_hop_afi; //type: uint32
                                                            Value next_hop_safi; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value tunnel_id; //type: uint32
                                                            Value pathid; //type: uint32
                                                            Value backup_pathid; //type: uint32
                                                            Value ref_cnt_of_backup; //type: uint32
                                                            Value number_of_extended_communities; //type: uint32
                                                            Value mvpn_present; //type: boolean
                                                            Value path_rt_present; //type: boolean
                                                            Value vrf_import_rt_present; //type: boolean
                                                            Value source_asrt_present; //type: boolean
                                                            Value source_rd_present; //type: boolean
                                                            Value segmented_nexthop_present; //type: boolean
                                                            Value next_hop_id; //type: uint32
                                                            Value next_hop_id_refcount; //type: uint32
                                                            Value ospf_area_id; //type: string
                                                            Value has_labelstk; //type: boolean
                                                            Value num_labels; //type: uint8
                                                            Value binding_label; //type: uint32
                                                            Value nhid_feid; //type: uint64
                                                            Value mpls_feid; //type: uint64
                                                            ValueList remote_backup_addr; //type: list of  string
                                                            ValueList labelstk; //type: list of  uint32




                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath> route_path;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute> > dest_backup_route;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes


                                        class DestBestRoutes : public Entity
                                        {
                                            public:
                                                DestBestRoutes();
                                                ~DestBestRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class DestBestRoute : public Entity
                                            {
                                                public:
                                                    DestBestRoute();
                                                    ~DestBestRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value address; //type: string
                                                    Value prefix; //type: string
                                                    Value prefix_length_xr; //type: uint8
                                                    Value route_version; //type: uint32
                                                    Value protocol_id; //type: uint32
                                                    Value protocol_name; //type: string
                                                    Value instance; //type: string
                                                    Value client_id; //type: uint32
                                                    Value route_type; //type: uint16
                                                    Value priority; //type: uint8
                                                    Value svd_type; //type: uint8
                                                    Value flags; //type: uint32
                                                    Value extended_flags; //type: uint64
                                                    Value tag; //type: uint32
                                                    Value distance; //type: uint32
                                                    Value diversion_distance; //type: uint32
                                                    Value metric; //type: uint32
                                                    Value paths_count; //type: uint32
                                                    Value attribute_identity; //type: uint32
                                                    Value traffic_index; //type: uint8
                                                    Value route_precedence; //type: uint8
                                                    Value qos_group; //type: uint8
                                                    Value flow_tag; //type: uint8
                                                    Value fwd_class; //type: uint8
                                                    Value pic_count; //type: uint8
                                                    Value active; //type: boolean
                                                    Value diversion; //type: boolean
                                                    Value diversion_proto_name; //type: string
                                                    Value route_age; //type: uint32
                                                    Value route_label; //type: uint32
                                                    Value version; //type: uint32
                                                    Value tbl_version; //type: uint64
                                                    Value route_modify_time; //type: uint64


                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class Ipv6RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv6RibEdmPath();
                                                            ~Ipv6RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value information_source; //type: string
                                                            Value v6_nexthop; //type: string
                                                            Value interface_name; //type: string
                                                            Value metric; //type: uint32
                                                            Value load_metric; //type: uint32
                                                            Value flags64; //type: uint64
                                                            Value flags; //type: uint16
                                                            Value private_flags; //type: uint16
                                                            Value looped; //type: boolean
                                                            Value next_hop_table_id; //type: uint32
                                                            Value next_hop_vrf_name; //type: string
                                                            Value next_hop_table_name; //type: string
                                                            Value next_hop_afi; //type: uint32
                                                            Value next_hop_safi; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value tunnel_id; //type: uint32
                                                            Value pathid; //type: uint32
                                                            Value backup_pathid; //type: uint32
                                                            Value ref_cnt_of_backup; //type: uint32
                                                            Value number_of_extended_communities; //type: uint32
                                                            Value mvpn_present; //type: boolean
                                                            Value path_rt_present; //type: boolean
                                                            Value vrf_import_rt_present; //type: boolean
                                                            Value source_asrt_present; //type: boolean
                                                            Value source_rd_present; //type: boolean
                                                            Value segmented_nexthop_present; //type: boolean
                                                            Value next_hop_id; //type: uint32
                                                            Value next_hop_id_refcount; //type: uint32
                                                            Value ospf_area_id; //type: string
                                                            Value has_labelstk; //type: boolean
                                                            Value num_labels; //type: uint8
                                                            Value binding_label; //type: uint32
                                                            Value nhid_feid; //type: uint64
                                                            Value mpls_feid; //type: uint64
                                                            ValueList remote_backup_addr; //type: list of  string
                                                            ValueList labelstk; //type: list of  uint32




                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath> route_path;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute> > dest_best_route;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes


                                        class DestNextHopRoutes : public Entity
                                        {
                                            public:
                                                DestNextHopRoutes();
                                                ~DestNextHopRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class DestNextHopRoute : public Entity
                                            {
                                                public:
                                                    DestNextHopRoute();
                                                    ~DestNextHopRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value address; //type: string
                                                    Value prefix; //type: string
                                                    Value prefix_length_xr; //type: uint8
                                                    Value route_version; //type: uint32
                                                    Value protocol_id; //type: uint32
                                                    Value protocol_name; //type: string
                                                    Value instance; //type: string
                                                    Value client_id; //type: uint32
                                                    Value route_type; //type: uint16
                                                    Value priority; //type: uint8
                                                    Value svd_type; //type: uint8
                                                    Value flags; //type: uint32
                                                    Value extended_flags; //type: uint64
                                                    Value tag; //type: uint32
                                                    Value distance; //type: uint32
                                                    Value diversion_distance; //type: uint32
                                                    Value metric; //type: uint32
                                                    Value paths_count; //type: uint32
                                                    Value attribute_identity; //type: uint32
                                                    Value traffic_index; //type: uint8
                                                    Value route_precedence; //type: uint8
                                                    Value qos_group; //type: uint8
                                                    Value flow_tag; //type: uint8
                                                    Value fwd_class; //type: uint8
                                                    Value pic_count; //type: uint8
                                                    Value active; //type: boolean
                                                    Value diversion; //type: boolean
                                                    Value diversion_proto_name; //type: string
                                                    Value route_age; //type: uint32
                                                    Value route_label; //type: uint32
                                                    Value version; //type: uint32
                                                    Value tbl_version; //type: uint64
                                                    Value route_modify_time; //type: uint64


                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class Ipv6RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv6RibEdmPath();
                                                            ~Ipv6RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value information_source; //type: string
                                                            Value v6_nexthop; //type: string
                                                            Value interface_name; //type: string
                                                            Value metric; //type: uint32
                                                            Value load_metric; //type: uint32
                                                            Value flags64; //type: uint64
                                                            Value flags; //type: uint16
                                                            Value private_flags; //type: uint16
                                                            Value looped; //type: boolean
                                                            Value next_hop_table_id; //type: uint32
                                                            Value next_hop_vrf_name; //type: string
                                                            Value next_hop_table_name; //type: string
                                                            Value next_hop_afi; //type: uint32
                                                            Value next_hop_safi; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value tunnel_id; //type: uint32
                                                            Value pathid; //type: uint32
                                                            Value backup_pathid; //type: uint32
                                                            Value ref_cnt_of_backup; //type: uint32
                                                            Value number_of_extended_communities; //type: uint32
                                                            Value mvpn_present; //type: boolean
                                                            Value path_rt_present; //type: boolean
                                                            Value vrf_import_rt_present; //type: boolean
                                                            Value source_asrt_present; //type: boolean
                                                            Value source_rd_present; //type: boolean
                                                            Value segmented_nexthop_present; //type: boolean
                                                            Value next_hop_id; //type: uint32
                                                            Value next_hop_id_refcount; //type: uint32
                                                            Value ospf_area_id; //type: string
                                                            Value has_labelstk; //type: boolean
                                                            Value num_labels; //type: uint8
                                                            Value binding_label; //type: uint32
                                                            Value nhid_feid; //type: uint64
                                                            Value mpls_feid; //type: uint64
                                                            ValueList remote_backup_addr; //type: list of  string
                                                            ValueList labelstk; //type: list of  uint32




                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath> route_path;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute> > dest_next_hop_route;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes


                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes> dest_backup_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes> dest_best_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes> dest_next_hop_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes> dest_q_routes;


                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw


                                    class Adverts : public Entity
                                    {
                                        public:
                                            Adverts();
                                            ~Adverts();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Advert : public Entity
                                        {
                                            public:
                                                Advert();
                                                ~Advert();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value prefix_length; //type: uint8


                                            class Ipv6RibEdmAdvert : public Entity
                                            {
                                                public:
                                                    Ipv6RibEdmAdvert();
                                                    ~Ipv6RibEdmAdvert();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value protocol_id; //type: uint32
                                                    Value client_id; //type: uint32
                                                    Value number_of_extended_communities; //type: uint32
                                                    Value extended_communities; //type: string
                                                    Value protocol_opaque_flags; //type: uint8
                                                    Value protocol_opaque; //type: uint32
                                                    Value code; //type: int8
                                                    Value instance_name; //type: string




                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert> > ipv6_rib_edm_advert;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert> > advert;


                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts


                                    class DeletedRoutes : public Entity
                                    {
                                        public:
                                            DeletedRoutes();
                                            ~DeletedRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class DeletedRoute : public Entity
                                        {
                                            public:
                                                DeletedRoute();
                                                ~DeletedRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value prefix_length; //type: uint8
                                                Value prefix; //type: string
                                                Value prefix_length_xr; //type: uint8
                                                Value route_version; //type: uint32
                                                Value protocol_id; //type: uint32
                                                Value protocol_name; //type: string
                                                Value instance; //type: string
                                                Value client_id; //type: uint32
                                                Value route_type; //type: uint16
                                                Value priority; //type: uint8
                                                Value svd_type; //type: uint8
                                                Value flags; //type: uint32
                                                Value extended_flags; //type: uint64
                                                Value tag; //type: uint32
                                                Value distance; //type: uint32
                                                Value diversion_distance; //type: uint32
                                                Value metric; //type: uint32
                                                Value paths_count; //type: uint32
                                                Value attribute_identity; //type: uint32
                                                Value traffic_index; //type: uint8
                                                Value route_precedence; //type: uint8
                                                Value qos_group; //type: uint8
                                                Value flow_tag; //type: uint8
                                                Value fwd_class; //type: uint8
                                                Value pic_count; //type: uint8
                                                Value active; //type: boolean
                                                Value diversion; //type: boolean
                                                Value diversion_proto_name; //type: string
                                                Value route_age; //type: uint32
                                                Value route_label; //type: uint32
                                                Value version; //type: uint32
                                                Value tbl_version; //type: uint64
                                                Value route_modify_time; //type: uint64


                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Ipv6RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv6RibEdmPath();
                                                        ~Ipv6RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value address; //type: string
                                                        Value information_source; //type: string
                                                        Value v6_nexthop; //type: string
                                                        Value interface_name; //type: string
                                                        Value metric; //type: uint32
                                                        Value load_metric; //type: uint32
                                                        Value flags64; //type: uint64
                                                        Value flags; //type: uint16
                                                        Value private_flags; //type: uint16
                                                        Value looped; //type: boolean
                                                        Value next_hop_table_id; //type: uint32
                                                        Value next_hop_vrf_name; //type: string
                                                        Value next_hop_table_name; //type: string
                                                        Value next_hop_afi; //type: uint32
                                                        Value next_hop_safi; //type: uint32
                                                        Value route_label; //type: uint32
                                                        Value tunnel_id; //type: uint32
                                                        Value pathid; //type: uint32
                                                        Value backup_pathid; //type: uint32
                                                        Value ref_cnt_of_backup; //type: uint32
                                                        Value number_of_extended_communities; //type: uint32
                                                        Value mvpn_present; //type: boolean
                                                        Value path_rt_present; //type: boolean
                                                        Value vrf_import_rt_present; //type: boolean
                                                        Value source_asrt_present; //type: boolean
                                                        Value source_rd_present; //type: boolean
                                                        Value segmented_nexthop_present; //type: boolean
                                                        Value next_hop_id; //type: uint32
                                                        Value next_hop_id_refcount; //type: uint32
                                                        Value ospf_area_id; //type: string
                                                        Value has_labelstk; //type: boolean
                                                        Value num_labels; //type: uint8
                                                        Value binding_label; //type: uint32
                                                        Value nhid_feid; //type: uint64
                                                        Value mpls_feid; //type: uint64
                                                        ValueList remote_backup_addr; //type: list of  string
                                                        ValueList labelstk; //type: list of  uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath> route_path;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute> > deleted_route;


                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes


                                    class Protocol : public Entity
                                    {
                                        public:
                                            Protocol();
                                            ~Protocol();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Local : public Entity
                                        {
                                            public:
                                                Local();
                                                ~Local();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Lspv : public Entity
                                            {
                                                public:
                                                    Lspv();
                                                    ~Lspv();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv> lspv;
                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs> non_as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local


                                        class Bgp : public Entity
                                        {
                                            public:
                                                Bgp();
                                                ~Bgp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: string


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As> > as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp


                                        class Mobile : public Entity
                                        {
                                            public:
                                                Mobile();
                                                ~Mobile();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs> non_as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile


                                        class Eigrp : public Entity
                                        {
                                            public:
                                                Eigrp();
                                                ~Eigrp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: string


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As> > as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp


                                        class Rpl : public Entity
                                        {
                                            public:
                                                Rpl();
                                                ~Rpl();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: string


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As> > as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl


                                        class Static_ : public Entity
                                        {
                                            public:
                                                Static_();
                                                ~Static_();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs> non_as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_


                                        class TeClient : public Entity
                                        {
                                            public:
                                                TeClient();
                                                ~TeClient();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs> non_as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient


                                        class Subscriber : public Entity
                                        {
                                            public:
                                                Subscriber();
                                                ~Subscriber();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs> non_as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber


                                        class Ospf : public Entity
                                        {
                                            public:
                                                Ospf();
                                                ~Ospf();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: string


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As> > as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf


                                        class Connected : public Entity
                                        {
                                            public:
                                                Connected();
                                                ~Connected();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class L2Vpn : public Entity
                                            {
                                                public:
                                                    L2Vpn();
                                                    ~L2Vpn();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn> l2vpn;
                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs> non_as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected


                                        class Isis : public Entity
                                        {
                                            public:
                                                Isis();
                                                ~Isis();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: string


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As> > as;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis


                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp> bgp;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected> connected;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp> eigrp;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis> isis;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local> local;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile> mobile;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf> ospf;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl> rpl;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_> static_;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber> subscriber;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient> te_client;


                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol


                                    class Routes : public Entity
                                    {
                                        public:
                                            Routes();
                                            ~Routes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Route : public Entity
                                        {
                                            public:
                                                Route();
                                                ~Route();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value prefix_length; //type: uint8
                                                Value next_hop_address; //type: string
                                                Value interface_name; //type: string
                                                Value prefix; //type: string
                                                Value prefix_length_xr; //type: uint8
                                                Value route_version; //type: uint32
                                                Value protocol_id; //type: uint32
                                                Value protocol_name; //type: string
                                                Value instance; //type: string
                                                Value client_id; //type: uint32
                                                Value route_type; //type: uint16
                                                Value priority; //type: uint8
                                                Value svd_type; //type: uint8
                                                Value flags; //type: uint32
                                                Value extended_flags; //type: uint64
                                                Value tag; //type: uint32
                                                Value distance; //type: uint32
                                                Value diversion_distance; //type: uint32
                                                Value metric; //type: uint32
                                                Value paths_count; //type: uint32
                                                Value attribute_identity; //type: uint32
                                                Value traffic_index; //type: uint8
                                                Value route_precedence; //type: uint8
                                                Value qos_group; //type: uint8
                                                Value flow_tag; //type: uint8
                                                Value fwd_class; //type: uint8
                                                Value pic_count; //type: uint8
                                                Value active; //type: boolean
                                                Value diversion; //type: boolean
                                                Value diversion_proto_name; //type: string
                                                Value route_age; //type: uint32
                                                Value route_label; //type: uint32
                                                Value version; //type: uint32
                                                Value tbl_version; //type: uint64
                                                Value route_modify_time; //type: uint64


                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Ipv6RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv6RibEdmPath();
                                                        ~Ipv6RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value address; //type: string
                                                        Value information_source; //type: string
                                                        Value v6_nexthop; //type: string
                                                        Value interface_name; //type: string
                                                        Value metric; //type: uint32
                                                        Value load_metric; //type: uint32
                                                        Value flags64; //type: uint64
                                                        Value flags; //type: uint16
                                                        Value private_flags; //type: uint16
                                                        Value looped; //type: boolean
                                                        Value next_hop_table_id; //type: uint32
                                                        Value next_hop_vrf_name; //type: string
                                                        Value next_hop_table_name; //type: string
                                                        Value next_hop_afi; //type: uint32
                                                        Value next_hop_safi; //type: uint32
                                                        Value route_label; //type: uint32
                                                        Value tunnel_id; //type: uint32
                                                        Value pathid; //type: uint32
                                                        Value backup_pathid; //type: uint32
                                                        Value ref_cnt_of_backup; //type: uint32
                                                        Value number_of_extended_communities; //type: uint32
                                                        Value mvpn_present; //type: boolean
                                                        Value path_rt_present; //type: boolean
                                                        Value vrf_import_rt_present; //type: boolean
                                                        Value source_asrt_present; //type: boolean
                                                        Value source_rd_present; //type: boolean
                                                        Value segmented_nexthop_present; //type: boolean
                                                        Value next_hop_id; //type: uint32
                                                        Value next_hop_id_refcount; //type: uint32
                                                        Value ospf_area_id; //type: string
                                                        Value has_labelstk; //type: boolean
                                                        Value num_labels; //type: uint8
                                                        Value binding_label; //type: uint32
                                                        Value nhid_feid; //type: uint64
                                                        Value mpls_feid; //type: uint64
                                                        ValueList remote_backup_addr; //type: list of  string
                                                        ValueList labelstk; //type: list of  uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath> route_path;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route> > route;


                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes


                                    class QRoutes : public Entity
                                    {
                                        public:
                                            QRoutes();
                                            ~QRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class QRoute : public Entity
                                        {
                                            public:
                                                QRoute();
                                                ~QRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value prefix_length; //type: uint8
                                                Value prefix; //type: string
                                                Value prefix_length_xr; //type: uint8
                                                Value route_version; //type: uint32
                                                Value protocol_id; //type: uint32
                                                Value protocol_name; //type: string
                                                Value instance; //type: string
                                                Value client_id; //type: uint32
                                                Value route_type; //type: uint16
                                                Value priority; //type: uint8
                                                Value svd_type; //type: uint8
                                                Value flags; //type: uint32
                                                Value extended_flags; //type: uint64
                                                Value tag; //type: uint32
                                                Value distance; //type: uint32
                                                Value diversion_distance; //type: uint32
                                                Value metric; //type: uint32
                                                Value paths_count; //type: uint32
                                                Value attribute_identity; //type: uint32
                                                Value traffic_index; //type: uint8
                                                Value route_precedence; //type: uint8
                                                Value qos_group; //type: uint8
                                                Value flow_tag; //type: uint8
                                                Value fwd_class; //type: uint8
                                                Value pic_count; //type: uint8
                                                Value active; //type: boolean
                                                Value diversion; //type: boolean
                                                Value diversion_proto_name; //type: string
                                                Value route_age; //type: uint32
                                                Value route_label; //type: uint32
                                                Value version; //type: uint32
                                                Value tbl_version; //type: uint64
                                                Value route_modify_time; //type: uint64


                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Ipv6RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv6RibEdmPath();
                                                        ~Ipv6RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value address; //type: string
                                                        Value information_source; //type: string
                                                        Value v6_nexthop; //type: string
                                                        Value interface_name; //type: string
                                                        Value metric; //type: uint32
                                                        Value load_metric; //type: uint32
                                                        Value flags64; //type: uint64
                                                        Value flags; //type: uint16
                                                        Value private_flags; //type: uint16
                                                        Value looped; //type: boolean
                                                        Value next_hop_table_id; //type: uint32
                                                        Value next_hop_vrf_name; //type: string
                                                        Value next_hop_table_name; //type: string
                                                        Value next_hop_afi; //type: uint32
                                                        Value next_hop_safi; //type: uint32
                                                        Value route_label; //type: uint32
                                                        Value tunnel_id; //type: uint32
                                                        Value pathid; //type: uint32
                                                        Value backup_pathid; //type: uint32
                                                        Value ref_cnt_of_backup; //type: uint32
                                                        Value number_of_extended_communities; //type: uint32
                                                        Value mvpn_present; //type: boolean
                                                        Value path_rt_present; //type: boolean
                                                        Value vrf_import_rt_present; //type: boolean
                                                        Value source_asrt_present; //type: boolean
                                                        Value source_rd_present; //type: boolean
                                                        Value segmented_nexthop_present; //type: boolean
                                                        Value next_hop_id; //type: uint32
                                                        Value next_hop_id_refcount; //type: uint32
                                                        Value ospf_area_id; //type: string
                                                        Value has_labelstk; //type: boolean
                                                        Value num_labels; //type: uint8
                                                        Value binding_label; //type: uint32
                                                        Value nhid_feid; //type: uint64
                                                        Value mpls_feid; //type: uint64
                                                        ValueList remote_backup_addr; //type: list of  string
                                                        ValueList labelstk; //type: list of  uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath> route_path;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute> > q_route;


                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes


                                    class BackupRoutes : public Entity
                                    {
                                        public:
                                            BackupRoutes();
                                            ~BackupRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class BackupRoute : public Entity
                                        {
                                            public:
                                                BackupRoute();
                                                ~BackupRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value prefix_length; //type: uint8
                                                Value protoid; //type: int32
                                                Value prefix; //type: string
                                                Value prefix_length_xr; //type: uint8
                                                Value route_version; //type: uint32
                                                Value protocol_id; //type: uint32
                                                Value protocol_name; //type: string
                                                Value instance; //type: string
                                                Value client_id; //type: uint32
                                                Value route_type; //type: uint16
                                                Value priority; //type: uint8
                                                Value svd_type; //type: uint8
                                                Value flags; //type: uint32
                                                Value extended_flags; //type: uint64
                                                Value tag; //type: uint32
                                                Value distance; //type: uint32
                                                Value diversion_distance; //type: uint32
                                                Value metric; //type: uint32
                                                Value paths_count; //type: uint32
                                                Value attribute_identity; //type: uint32
                                                Value traffic_index; //type: uint8
                                                Value route_precedence; //type: uint8
                                                Value qos_group; //type: uint8
                                                Value flow_tag; //type: uint8
                                                Value fwd_class; //type: uint8
                                                Value pic_count; //type: uint8
                                                Value active; //type: boolean
                                                Value diversion; //type: boolean
                                                Value diversion_proto_name; //type: string
                                                Value route_age; //type: uint32
                                                Value route_label; //type: uint32
                                                Value version; //type: uint32
                                                Value tbl_version; //type: uint64
                                                Value route_modify_time; //type: uint64


                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Ipv6RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv6RibEdmPath();
                                                        ~Ipv6RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value address; //type: string
                                                        Value information_source; //type: string
                                                        Value v6_nexthop; //type: string
                                                        Value interface_name; //type: string
                                                        Value metric; //type: uint32
                                                        Value load_metric; //type: uint32
                                                        Value flags64; //type: uint64
                                                        Value flags; //type: uint16
                                                        Value private_flags; //type: uint16
                                                        Value looped; //type: boolean
                                                        Value next_hop_table_id; //type: uint32
                                                        Value next_hop_vrf_name; //type: string
                                                        Value next_hop_table_name; //type: string
                                                        Value next_hop_afi; //type: uint32
                                                        Value next_hop_safi; //type: uint32
                                                        Value route_label; //type: uint32
                                                        Value tunnel_id; //type: uint32
                                                        Value pathid; //type: uint32
                                                        Value backup_pathid; //type: uint32
                                                        Value ref_cnt_of_backup; //type: uint32
                                                        Value number_of_extended_communities; //type: uint32
                                                        Value mvpn_present; //type: boolean
                                                        Value path_rt_present; //type: boolean
                                                        Value vrf_import_rt_present; //type: boolean
                                                        Value source_asrt_present; //type: boolean
                                                        Value source_rd_present; //type: boolean
                                                        Value segmented_nexthop_present; //type: boolean
                                                        Value next_hop_id; //type: uint32
                                                        Value next_hop_id_refcount; //type: uint32
                                                        Value ospf_area_id; //type: string
                                                        Value has_labelstk; //type: boolean
                                                        Value num_labels; //type: uint8
                                                        Value binding_label; //type: uint32
                                                        Value nhid_feid; //type: uint64
                                                        Value mpls_feid; //type: uint64
                                                        ValueList remote_backup_addr; //type: list of  string
                                                        ValueList labelstk; //type: list of  uint32




                                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath> route_path;


                                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute> > backup_route;


                                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes


                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts> adverts;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes> backup_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes> deleted_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw> destination_kw;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol> protocol;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes> q_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes> routes;


                                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName> > ip_rib_route_table_name;


                            }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames


                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames> ip_rib_route_table_names;


                        }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs::Saf> > saf;


                    }; // Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs


                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af::Safs> safs;


                }; // Ipv6Rib::Vrfs::Vrf::Afs::Af


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs::Af> > af;


            }; // Ipv6Rib::Vrfs::Vrf::Afs


                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf::Afs> afs;


        }; // Ipv6Rib::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs::Vrf> > vrf;


    }; // Ipv6Rib::Vrfs


        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::RibTableIds> rib_table_ids;
        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib::Vrfs> vrfs;


}; // Ipv6Rib

class Ipv6RibStdby : public Entity
{
    public:
        Ipv6RibStdby();
        ~Ipv6RibStdby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class RibTableIds : public Entity
    {
        public:
            RibTableIds();
            ~RibTableIds();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RibTableId : public Entity
        {
            public:
                RibTableId();
                ~RibTableId();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value tableid; //type: string


            class SummaryProtos : public Entity
            {
                public:
                    SummaryProtos();
                    ~SummaryProtos();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SummaryProto : public Entity
                {
                    public:
                        SummaryProto();
                        ~SummaryProto();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value protoid; //type: int32
                        Value name; //type: string
                        Value instance; //type: string


                    class ProtoRouteCount : public Entity
                    {
                        public:
                            ProtoRouteCount();
                            ~ProtoRouteCount();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount


                    class RtypeNone : public Entity
                    {
                        public:
                            RtypeNone();
                            ~RtypeNone();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone


                    class RtypeOther : public Entity
                    {
                        public:
                            RtypeOther();
                            ~RtypeOther();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther


                    class RtypeOspfIntra : public Entity
                    {
                        public:
                            RtypeOspfIntra();
                            ~RtypeOspfIntra();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra


                    class RtypeOspfInter : public Entity
                    {
                        public:
                            RtypeOspfInter();
                            ~RtypeOspfInter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter


                    class RtypeOspfExtern1 : public Entity
                    {
                        public:
                            RtypeOspfExtern1();
                            ~RtypeOspfExtern1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1


                    class RtypeOspfExtern2 : public Entity
                    {
                        public:
                            RtypeOspfExtern2();
                            ~RtypeOspfExtern2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2


                    class RtypeIsisSum : public Entity
                    {
                        public:
                            RtypeIsisSum();
                            ~RtypeIsisSum();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum


                    class RtypeIsisL1 : public Entity
                    {
                        public:
                            RtypeIsisL1();
                            ~RtypeIsisL1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1


                    class RtypeIsisL2 : public Entity
                    {
                        public:
                            RtypeIsisL2();
                            ~RtypeIsisL2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2


                    class RtypeIsisL1Ia : public Entity
                    {
                        public:
                            RtypeIsisL1Ia();
                            ~RtypeIsisL1Ia();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia


                    class RtypeBgpInt : public Entity
                    {
                        public:
                            RtypeBgpInt();
                            ~RtypeBgpInt();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt


                    class RtypeBgpExt : public Entity
                    {
                        public:
                            RtypeBgpExt();
                            ~RtypeBgpExt();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt


                    class RtypeBgpLoc : public Entity
                    {
                        public:
                            RtypeBgpLoc();
                            ~RtypeBgpLoc();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc


                    class RtypeOspfNssa1 : public Entity
                    {
                        public:
                            RtypeOspfNssa1();
                            ~RtypeOspfNssa1();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1


                    class RtypeOspfNssa2 : public Entity
                    {
                        public:
                            RtypeOspfNssa2();
                            ~RtypeOspfNssa2();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2


                    class RtypeIgrp2Int : public Entity
                    {
                        public:
                            RtypeIgrp2Int();
                            ~RtypeIgrp2Int();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int


                    class RtypeIgrp2Ext : public Entity
                    {
                        public:
                            RtypeIgrp2Ext();
                            ~RtypeIgrp2Ext();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value active_routes_count; //type: uint32
                            Value num_backup_routes; //type: uint32
                            Value num_active_paths; //type: uint32
                            Value num_backup_paths; //type: uint32




                    }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext


                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::ProtoRouteCount> proto_route_count;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpExt> rtype_bgp_ext;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpInt> rtype_bgp_int;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeBgpLoc> rtype_bgp_loc;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Ext> rtype_igrp2_ext;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIgrp2Int> rtype_igrp2_int;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1> rtype_isis_l1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL1Ia> rtype_isis_l1_ia;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisL2> rtype_isis_l2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeIsisSum> rtype_isis_sum;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeNone> rtype_none;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern1> rtype_ospf_extern1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfExtern2> rtype_ospf_extern2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfInter> rtype_ospf_inter;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfIntra> rtype_ospf_intra;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa1> rtype_ospf_nssa1;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOspfNssa2> rtype_ospf_nssa2;
                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto::RtypeOther> rtype_other;


                }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos::SummaryProto> > summary_proto;


            }; // Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos


            class RibTableItfHndls : public Entity
            {
                public:
                    RibTableItfHndls();
                    ~RibTableItfHndls();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class RibTableItfHndl : public Entity
                {
                    public:
                        RibTableItfHndl();
                        ~RibTableItfHndl();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value handle; //type: int32


                    class ItfRoute : public Entity
                    {
                        public:
                            ItfRoute();
                            ~ItfRoute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string
                            Value prefix; //type: string
                            Value prefix_length_xr; //type: uint8
                            Value route_version; //type: uint32
                            Value protocol_id; //type: uint32
                            Value protocol_name; //type: string
                            Value instance; //type: string
                            Value client_id; //type: uint32
                            Value route_type; //type: uint16
                            Value priority; //type: uint8
                            Value svd_type; //type: uint8
                            Value flags; //type: uint32
                            Value extended_flags; //type: uint64
                            Value tag; //type: uint32
                            Value distance; //type: uint32
                            Value diversion_distance; //type: uint32
                            Value metric; //type: uint32
                            Value paths_count; //type: uint32
                            Value attribute_identity; //type: uint32
                            Value traffic_index; //type: uint8
                            Value route_precedence; //type: uint8
                            Value qos_group; //type: uint8
                            Value flow_tag; //type: uint8
                            Value fwd_class; //type: uint8
                            Value pic_count; //type: uint8
                            Value active; //type: boolean
                            Value diversion; //type: boolean
                            Value diversion_proto_name; //type: string
                            Value route_age; //type: uint32
                            Value route_label; //type: uint32
                            Value version; //type: uint32
                            Value tbl_version; //type: uint64
                            Value route_modify_time; //type: uint64


                        class RoutePath : public Entity
                        {
                            public:
                                RoutePath();
                                ~RoutePath();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Ipv6RibEdmPath : public Entity
                            {
                                public:
                                    Ipv6RibEdmPath();
                                    ~Ipv6RibEdmPath();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string
                                    Value information_source; //type: string
                                    Value v6_nexthop; //type: string
                                    Value interface_name; //type: string
                                    Value metric; //type: uint32
                                    Value load_metric; //type: uint32
                                    Value flags64; //type: uint64
                                    Value flags; //type: uint16
                                    Value private_flags; //type: uint16
                                    Value looped; //type: boolean
                                    Value next_hop_table_id; //type: uint32
                                    Value next_hop_vrf_name; //type: string
                                    Value next_hop_table_name; //type: string
                                    Value next_hop_afi; //type: uint32
                                    Value next_hop_safi; //type: uint32
                                    Value route_label; //type: uint32
                                    Value tunnel_id; //type: uint32
                                    Value pathid; //type: uint32
                                    Value backup_pathid; //type: uint32
                                    Value ref_cnt_of_backup; //type: uint32
                                    Value number_of_extended_communities; //type: uint32
                                    Value mvpn_present; //type: boolean
                                    Value path_rt_present; //type: boolean
                                    Value vrf_import_rt_present; //type: boolean
                                    Value source_asrt_present; //type: boolean
                                    Value source_rd_present; //type: boolean
                                    Value segmented_nexthop_present; //type: boolean
                                    Value next_hop_id; //type: uint32
                                    Value next_hop_id_refcount; //type: uint32
                                    Value ospf_area_id; //type: string
                                    Value has_labelstk; //type: boolean
                                    Value num_labels; //type: uint8
                                    Value binding_label; //type: uint32
                                    Value nhid_feid; //type: uint64
                                    Value mpls_feid; //type: uint64
                                    ValueList remote_backup_addr; //type: list of  string
                                    ValueList labelstk; //type: list of  uint32




                            }; // Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                        }; // Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath


                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute::RoutePath> route_path;


                    }; // Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl::ItfRoute> > itf_route;


                }; // Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls::RibTableItfHndl> > rib_table_itf_hndl;


            }; // Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls


                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::RibTableItfHndls> rib_table_itf_hndls;
                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId::SummaryProtos> summary_protos;


        }; // Ipv6RibStdby::RibTableIds::RibTableId


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds::RibTableId> > rib_table_id;


    }; // Ipv6RibStdby::RibTableIds


    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vrf_name; //type: string


            class Afs : public Entity
            {
                public:
                    Afs();
                    ~Afs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Af : public Entity
                {
                    public:
                        Af();
                        ~Af();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value af_name; //type: string


                    class Safs : public Entity
                    {
                        public:
                            Safs();
                            ~Safs();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Saf : public Entity
                        {
                            public:
                                Saf();
                                ~Saf();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value saf_name; //type: string


                            class IpRibRouteTableNames : public Entity
                            {
                                public:
                                    IpRibRouteTableNames();
                                    ~IpRibRouteTableNames();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class IpRibRouteTableName : public Entity
                                {
                                    public:
                                        IpRibRouteTableName();
                                        ~IpRibRouteTableName();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value route_table_name; //type: string


                                    class DestinationKw : public Entity
                                    {
                                        public:
                                            DestinationKw();
                                            ~DestinationKw();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class DestQRoutes : public Entity
                                        {
                                            public:
                                                DestQRoutes();
                                                ~DestQRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class DestQRoute : public Entity
                                            {
                                                public:
                                                    DestQRoute();
                                                    ~DestQRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value address; //type: string
                                                    Value prefix_length; //type: uint8
                                                    Value prefix; //type: string
                                                    Value prefix_length_xr; //type: uint8
                                                    Value route_version; //type: uint32
                                                    Value protocol_id; //type: uint32
                                                    Value protocol_name; //type: string
                                                    Value instance; //type: string
                                                    Value client_id; //type: uint32
                                                    Value route_type; //type: uint16
                                                    Value priority; //type: uint8
                                                    Value svd_type; //type: uint8
                                                    Value flags; //type: uint32
                                                    Value extended_flags; //type: uint64
                                                    Value tag; //type: uint32
                                                    Value distance; //type: uint32
                                                    Value diversion_distance; //type: uint32
                                                    Value metric; //type: uint32
                                                    Value paths_count; //type: uint32
                                                    Value attribute_identity; //type: uint32
                                                    Value traffic_index; //type: uint8
                                                    Value route_precedence; //type: uint8
                                                    Value qos_group; //type: uint8
                                                    Value flow_tag; //type: uint8
                                                    Value fwd_class; //type: uint8
                                                    Value pic_count; //type: uint8
                                                    Value active; //type: boolean
                                                    Value diversion; //type: boolean
                                                    Value diversion_proto_name; //type: string
                                                    Value route_age; //type: uint32
                                                    Value route_label; //type: uint32
                                                    Value version; //type: uint32
                                                    Value tbl_version; //type: uint64
                                                    Value route_modify_time; //type: uint64


                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class Ipv6RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv6RibEdmPath();
                                                            ~Ipv6RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value information_source; //type: string
                                                            Value v6_nexthop; //type: string
                                                            Value interface_name; //type: string
                                                            Value metric; //type: uint32
                                                            Value load_metric; //type: uint32
                                                            Value flags64; //type: uint64
                                                            Value flags; //type: uint16
                                                            Value private_flags; //type: uint16
                                                            Value looped; //type: boolean
                                                            Value next_hop_table_id; //type: uint32
                                                            Value next_hop_vrf_name; //type: string
                                                            Value next_hop_table_name; //type: string
                                                            Value next_hop_afi; //type: uint32
                                                            Value next_hop_safi; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value tunnel_id; //type: uint32
                                                            Value pathid; //type: uint32
                                                            Value backup_pathid; //type: uint32
                                                            Value ref_cnt_of_backup; //type: uint32
                                                            Value number_of_extended_communities; //type: uint32
                                                            Value mvpn_present; //type: boolean
                                                            Value path_rt_present; //type: boolean
                                                            Value vrf_import_rt_present; //type: boolean
                                                            Value source_asrt_present; //type: boolean
                                                            Value source_rd_present; //type: boolean
                                                            Value segmented_nexthop_present; //type: boolean
                                                            Value next_hop_id; //type: uint32
                                                            Value next_hop_id_refcount; //type: uint32
                                                            Value ospf_area_id; //type: string
                                                            Value has_labelstk; //type: boolean
                                                            Value num_labels; //type: uint8
                                                            Value binding_label; //type: uint32
                                                            Value nhid_feid; //type: uint64
                                                            Value mpls_feid; //type: uint64
                                                            ValueList remote_backup_addr; //type: list of  string
                                                            ValueList labelstk; //type: list of  uint32




                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute::RoutePath> route_path;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes::DestQRoute> > dest_q_route;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes


                                        class DestBackupRoutes : public Entity
                                        {
                                            public:
                                                DestBackupRoutes();
                                                ~DestBackupRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class DestBackupRoute : public Entity
                                            {
                                                public:
                                                    DestBackupRoute();
                                                    ~DestBackupRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value address; //type: string
                                                    Value prefix_length; //type: uint8
                                                    Value prefix; //type: string
                                                    Value prefix_length_xr; //type: uint8
                                                    Value route_version; //type: uint32
                                                    Value protocol_id; //type: uint32
                                                    Value protocol_name; //type: string
                                                    Value instance; //type: string
                                                    Value client_id; //type: uint32
                                                    Value route_type; //type: uint16
                                                    Value priority; //type: uint8
                                                    Value svd_type; //type: uint8
                                                    Value flags; //type: uint32
                                                    Value extended_flags; //type: uint64
                                                    Value tag; //type: uint32
                                                    Value distance; //type: uint32
                                                    Value diversion_distance; //type: uint32
                                                    Value metric; //type: uint32
                                                    Value paths_count; //type: uint32
                                                    Value attribute_identity; //type: uint32
                                                    Value traffic_index; //type: uint8
                                                    Value route_precedence; //type: uint8
                                                    Value qos_group; //type: uint8
                                                    Value flow_tag; //type: uint8
                                                    Value fwd_class; //type: uint8
                                                    Value pic_count; //type: uint8
                                                    Value active; //type: boolean
                                                    Value diversion; //type: boolean
                                                    Value diversion_proto_name; //type: string
                                                    Value route_age; //type: uint32
                                                    Value route_label; //type: uint32
                                                    Value version; //type: uint32
                                                    Value tbl_version; //type: uint64
                                                    Value route_modify_time; //type: uint64


                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class Ipv6RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv6RibEdmPath();
                                                            ~Ipv6RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value information_source; //type: string
                                                            Value v6_nexthop; //type: string
                                                            Value interface_name; //type: string
                                                            Value metric; //type: uint32
                                                            Value load_metric; //type: uint32
                                                            Value flags64; //type: uint64
                                                            Value flags; //type: uint16
                                                            Value private_flags; //type: uint16
                                                            Value looped; //type: boolean
                                                            Value next_hop_table_id; //type: uint32
                                                            Value next_hop_vrf_name; //type: string
                                                            Value next_hop_table_name; //type: string
                                                            Value next_hop_afi; //type: uint32
                                                            Value next_hop_safi; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value tunnel_id; //type: uint32
                                                            Value pathid; //type: uint32
                                                            Value backup_pathid; //type: uint32
                                                            Value ref_cnt_of_backup; //type: uint32
                                                            Value number_of_extended_communities; //type: uint32
                                                            Value mvpn_present; //type: boolean
                                                            Value path_rt_present; //type: boolean
                                                            Value vrf_import_rt_present; //type: boolean
                                                            Value source_asrt_present; //type: boolean
                                                            Value source_rd_present; //type: boolean
                                                            Value segmented_nexthop_present; //type: boolean
                                                            Value next_hop_id; //type: uint32
                                                            Value next_hop_id_refcount; //type: uint32
                                                            Value ospf_area_id; //type: string
                                                            Value has_labelstk; //type: boolean
                                                            Value num_labels; //type: uint8
                                                            Value binding_label; //type: uint32
                                                            Value nhid_feid; //type: uint64
                                                            Value mpls_feid; //type: uint64
                                                            ValueList remote_backup_addr; //type: list of  string
                                                            ValueList labelstk; //type: list of  uint32




                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute::RoutePath> route_path;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes::DestBackupRoute> > dest_backup_route;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes


                                        class DestBestRoutes : public Entity
                                        {
                                            public:
                                                DestBestRoutes();
                                                ~DestBestRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class DestBestRoute : public Entity
                                            {
                                                public:
                                                    DestBestRoute();
                                                    ~DestBestRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value address; //type: string
                                                    Value prefix; //type: string
                                                    Value prefix_length_xr; //type: uint8
                                                    Value route_version; //type: uint32
                                                    Value protocol_id; //type: uint32
                                                    Value protocol_name; //type: string
                                                    Value instance; //type: string
                                                    Value client_id; //type: uint32
                                                    Value route_type; //type: uint16
                                                    Value priority; //type: uint8
                                                    Value svd_type; //type: uint8
                                                    Value flags; //type: uint32
                                                    Value extended_flags; //type: uint64
                                                    Value tag; //type: uint32
                                                    Value distance; //type: uint32
                                                    Value diversion_distance; //type: uint32
                                                    Value metric; //type: uint32
                                                    Value paths_count; //type: uint32
                                                    Value attribute_identity; //type: uint32
                                                    Value traffic_index; //type: uint8
                                                    Value route_precedence; //type: uint8
                                                    Value qos_group; //type: uint8
                                                    Value flow_tag; //type: uint8
                                                    Value fwd_class; //type: uint8
                                                    Value pic_count; //type: uint8
                                                    Value active; //type: boolean
                                                    Value diversion; //type: boolean
                                                    Value diversion_proto_name; //type: string
                                                    Value route_age; //type: uint32
                                                    Value route_label; //type: uint32
                                                    Value version; //type: uint32
                                                    Value tbl_version; //type: uint64
                                                    Value route_modify_time; //type: uint64


                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class Ipv6RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv6RibEdmPath();
                                                            ~Ipv6RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value information_source; //type: string
                                                            Value v6_nexthop; //type: string
                                                            Value interface_name; //type: string
                                                            Value metric; //type: uint32
                                                            Value load_metric; //type: uint32
                                                            Value flags64; //type: uint64
                                                            Value flags; //type: uint16
                                                            Value private_flags; //type: uint16
                                                            Value looped; //type: boolean
                                                            Value next_hop_table_id; //type: uint32
                                                            Value next_hop_vrf_name; //type: string
                                                            Value next_hop_table_name; //type: string
                                                            Value next_hop_afi; //type: uint32
                                                            Value next_hop_safi; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value tunnel_id; //type: uint32
                                                            Value pathid; //type: uint32
                                                            Value backup_pathid; //type: uint32
                                                            Value ref_cnt_of_backup; //type: uint32
                                                            Value number_of_extended_communities; //type: uint32
                                                            Value mvpn_present; //type: boolean
                                                            Value path_rt_present; //type: boolean
                                                            Value vrf_import_rt_present; //type: boolean
                                                            Value source_asrt_present; //type: boolean
                                                            Value source_rd_present; //type: boolean
                                                            Value segmented_nexthop_present; //type: boolean
                                                            Value next_hop_id; //type: uint32
                                                            Value next_hop_id_refcount; //type: uint32
                                                            Value ospf_area_id; //type: string
                                                            Value has_labelstk; //type: boolean
                                                            Value num_labels; //type: uint8
                                                            Value binding_label; //type: uint32
                                                            Value nhid_feid; //type: uint64
                                                            Value mpls_feid; //type: uint64
                                                            ValueList remote_backup_addr; //type: list of  string
                                                            ValueList labelstk; //type: list of  uint32




                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute::RoutePath> route_path;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes::DestBestRoute> > dest_best_route;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes


                                        class DestNextHopRoutes : public Entity
                                        {
                                            public:
                                                DestNextHopRoutes();
                                                ~DestNextHopRoutes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class DestNextHopRoute : public Entity
                                            {
                                                public:
                                                    DestNextHopRoute();
                                                    ~DestNextHopRoute();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value address; //type: string
                                                    Value prefix; //type: string
                                                    Value prefix_length_xr; //type: uint8
                                                    Value route_version; //type: uint32
                                                    Value protocol_id; //type: uint32
                                                    Value protocol_name; //type: string
                                                    Value instance; //type: string
                                                    Value client_id; //type: uint32
                                                    Value route_type; //type: uint16
                                                    Value priority; //type: uint8
                                                    Value svd_type; //type: uint8
                                                    Value flags; //type: uint32
                                                    Value extended_flags; //type: uint64
                                                    Value tag; //type: uint32
                                                    Value distance; //type: uint32
                                                    Value diversion_distance; //type: uint32
                                                    Value metric; //type: uint32
                                                    Value paths_count; //type: uint32
                                                    Value attribute_identity; //type: uint32
                                                    Value traffic_index; //type: uint8
                                                    Value route_precedence; //type: uint8
                                                    Value qos_group; //type: uint8
                                                    Value flow_tag; //type: uint8
                                                    Value fwd_class; //type: uint8
                                                    Value pic_count; //type: uint8
                                                    Value active; //type: boolean
                                                    Value diversion; //type: boolean
                                                    Value diversion_proto_name; //type: string
                                                    Value route_age; //type: uint32
                                                    Value route_label; //type: uint32
                                                    Value version; //type: uint32
                                                    Value tbl_version; //type: uint64
                                                    Value route_modify_time; //type: uint64


                                                class RoutePath : public Entity
                                                {
                                                    public:
                                                        RoutePath();
                                                        ~RoutePath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class Ipv6RibEdmPath : public Entity
                                                    {
                                                        public:
                                                            Ipv6RibEdmPath();
                                                            ~Ipv6RibEdmPath();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value information_source; //type: string
                                                            Value v6_nexthop; //type: string
                                                            Value interface_name; //type: string
                                                            Value metric; //type: uint32
                                                            Value load_metric; //type: uint32
                                                            Value flags64; //type: uint64
                                                            Value flags; //type: uint16
                                                            Value private_flags; //type: uint16
                                                            Value looped; //type: boolean
                                                            Value next_hop_table_id; //type: uint32
                                                            Value next_hop_vrf_name; //type: string
                                                            Value next_hop_table_name; //type: string
                                                            Value next_hop_afi; //type: uint32
                                                            Value next_hop_safi; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value tunnel_id; //type: uint32
                                                            Value pathid; //type: uint32
                                                            Value backup_pathid; //type: uint32
                                                            Value ref_cnt_of_backup; //type: uint32
                                                            Value number_of_extended_communities; //type: uint32
                                                            Value mvpn_present; //type: boolean
                                                            Value path_rt_present; //type: boolean
                                                            Value vrf_import_rt_present; //type: boolean
                                                            Value source_asrt_present; //type: boolean
                                                            Value source_rd_present; //type: boolean
                                                            Value segmented_nexthop_present; //type: boolean
                                                            Value next_hop_id; //type: uint32
                                                            Value next_hop_id_refcount; //type: uint32
                                                            Value ospf_area_id; //type: string
                                                            Value has_labelstk; //type: boolean
                                                            Value num_labels; //type: uint8
                                                            Value binding_label; //type: uint32
                                                            Value nhid_feid; //type: uint64
                                                            Value mpls_feid; //type: uint64
                                                            ValueList remote_backup_addr; //type: list of  string
                                                            ValueList labelstk; //type: list of  uint32




                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute::RoutePath> route_path;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes::DestNextHopRoute> > dest_next_hop_route;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes


                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBackupRoutes> dest_backup_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestBestRoutes> dest_best_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestNextHopRoutes> dest_next_hop_routes;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw::DestQRoutes> dest_q_routes;


                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw


                                    class Adverts : public Entity
                                    {
                                        public:
                                            Adverts();
                                            ~Adverts();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Advert : public Entity
                                        {
                                            public:
                                                Advert();
                                                ~Advert();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value prefix_length; //type: uint8


                                            class Ipv6RibEdmAdvert : public Entity
                                            {
                                                public:
                                                    Ipv6RibEdmAdvert();
                                                    ~Ipv6RibEdmAdvert();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value protocol_id; //type: uint32
                                                    Value client_id; //type: uint32
                                                    Value number_of_extended_communities; //type: uint32
                                                    Value extended_communities; //type: string
                                                    Value protocol_opaque_flags; //type: uint8
                                                    Value protocol_opaque; //type: uint32
                                                    Value code; //type: int8
                                                    Value instance_name; //type: string




                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert::Ipv6RibEdmAdvert> > ipv6_rib_edm_advert;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts::Advert> > advert;


                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts


                                    class DeletedRoutes : public Entity
                                    {
                                        public:
                                            DeletedRoutes();
                                            ~DeletedRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class DeletedRoute : public Entity
                                        {
                                            public:
                                                DeletedRoute();
                                                ~DeletedRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value prefix_length; //type: uint8
                                                Value prefix; //type: string
                                                Value prefix_length_xr; //type: uint8
                                                Value route_version; //type: uint32
                                                Value protocol_id; //type: uint32
                                                Value protocol_name; //type: string
                                                Value instance; //type: string
                                                Value client_id; //type: uint32
                                                Value route_type; //type: uint16
                                                Value priority; //type: uint8
                                                Value svd_type; //type: uint8
                                                Value flags; //type: uint32
                                                Value extended_flags; //type: uint64
                                                Value tag; //type: uint32
                                                Value distance; //type: uint32
                                                Value diversion_distance; //type: uint32
                                                Value metric; //type: uint32
                                                Value paths_count; //type: uint32
                                                Value attribute_identity; //type: uint32
                                                Value traffic_index; //type: uint8
                                                Value route_precedence; //type: uint8
                                                Value qos_group; //type: uint8
                                                Value flow_tag; //type: uint8
                                                Value fwd_class; //type: uint8
                                                Value pic_count; //type: uint8
                                                Value active; //type: boolean
                                                Value diversion; //type: boolean
                                                Value diversion_proto_name; //type: string
                                                Value route_age; //type: uint32
                                                Value route_label; //type: uint32
                                                Value version; //type: uint32
                                                Value tbl_version; //type: uint64
                                                Value route_modify_time; //type: uint64


                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Ipv6RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv6RibEdmPath();
                                                        ~Ipv6RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value address; //type: string
                                                        Value information_source; //type: string
                                                        Value v6_nexthop; //type: string
                                                        Value interface_name; //type: string
                                                        Value metric; //type: uint32
                                                        Value load_metric; //type: uint32
                                                        Value flags64; //type: uint64
                                                        Value flags; //type: uint16
                                                        Value private_flags; //type: uint16
                                                        Value looped; //type: boolean
                                                        Value next_hop_table_id; //type: uint32
                                                        Value next_hop_vrf_name; //type: string
                                                        Value next_hop_table_name; //type: string
                                                        Value next_hop_afi; //type: uint32
                                                        Value next_hop_safi; //type: uint32
                                                        Value route_label; //type: uint32
                                                        Value tunnel_id; //type: uint32
                                                        Value pathid; //type: uint32
                                                        Value backup_pathid; //type: uint32
                                                        Value ref_cnt_of_backup; //type: uint32
                                                        Value number_of_extended_communities; //type: uint32
                                                        Value mvpn_present; //type: boolean
                                                        Value path_rt_present; //type: boolean
                                                        Value vrf_import_rt_present; //type: boolean
                                                        Value source_asrt_present; //type: boolean
                                                        Value source_rd_present; //type: boolean
                                                        Value segmented_nexthop_present; //type: boolean
                                                        Value next_hop_id; //type: uint32
                                                        Value next_hop_id_refcount; //type: uint32
                                                        Value ospf_area_id; //type: string
                                                        Value has_labelstk; //type: boolean
                                                        Value num_labels; //type: uint8
                                                        Value binding_label; //type: uint32
                                                        Value nhid_feid; //type: uint64
                                                        Value mpls_feid; //type: uint64
                                                        ValueList remote_backup_addr; //type: list of  string
                                                        ValueList labelstk; //type: list of  uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute::RoutePath> route_path;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes::DeletedRoute> > deleted_route;


                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes


                                    class Protocol : public Entity
                                    {
                                        public:
                                            Protocol();
                                            ~Protocol();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Local : public Entity
                                        {
                                            public:
                                                Local();
                                                ~Local();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class Lspv : public Entity
                                            {
                                                public:
                                                    Lspv();
                                                    ~Lspv();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::Lspv> lspv;
                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local::NonAs> non_as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local


                                        class Bgp : public Entity
                                        {
                                            public:
                                                Bgp();
                                                ~Bgp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: string


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp::As> > as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp


                                        class Mobile : public Entity
                                        {
                                            public:
                                                Mobile();
                                                ~Mobile();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile::NonAs> non_as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile


                                        class Eigrp : public Entity
                                        {
                                            public:
                                                Eigrp();
                                                ~Eigrp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: string


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp::As> > as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp


                                        class Rpl : public Entity
                                        {
                                            public:
                                                Rpl();
                                                ~Rpl();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: string


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl::As> > as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl


                                        class Static_ : public Entity
                                        {
                                            public:
                                                Static_();
                                                ~Static_();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_::NonAs> non_as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_


                                        class TeClient : public Entity
                                        {
                                            public:
                                                TeClient();
                                                ~TeClient();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient::NonAs> non_as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient


                                        class Subscriber : public Entity
                                        {
                                            public:
                                                Subscriber();
                                                ~Subscriber();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber::NonAs> non_as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber


                                        class Ospf : public Entity
                                        {
                                            public:
                                                Ospf();
                                                ~Ospf();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: string


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf::As> > as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf


                                        class Connected : public Entity
                                        {
                                            public:
                                                Connected();
                                                ~Connected();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class L2Vpn : public Entity
                                            {
                                                public:
                                                    L2Vpn();
                                                    ~L2Vpn();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn


                                            class NonAs : public Entity
                                            {
                                                public:
                                                    NonAs();
                                                    ~NonAs();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::L2Vpn> l2vpn;
                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected::NonAs> non_as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected


                                        class Isis : public Entity
                                        {
                                            public:
                                                Isis();
                                                ~Isis();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class As : public Entity
                                            {
                                                public:
                                                    As();
                                                    ~As();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value as; //type: string


                                                class Information : public Entity
                                                {
                                                    public:
                                                        Information();
                                                        ~Information();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value protocol_names; //type: string
                                                        Value instance; //type: string
                                                        Value version; //type: uint32
                                                        Value redistribution_client_count; //type: uint32
                                                        Value protocol_clients_count; //type: uint32
                                                        Value routes_counts; //type: uint32
                                                        Value active_routes_count; //type: uint32
                                                        Value deleted_routes_count; //type: uint32
                                                        Value paths_count; //type: uint32
                                                        Value protocol_route_memory; //type: uint32
                                                        Value backup_routes_count; //type: uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information


                                                class ProtocolRoutes : public Entity
                                                {
                                                    public:
                                                        ProtocolRoutes();
                                                        ~ProtocolRoutes();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;


                                                    class ProtocolRoute : public Entity
                                                    {
                                                        public:
                                                            ProtocolRoute();
                                                            ~ProtocolRoute();

                                                            bool has_data() const override;
                                                            bool has_operation() const override;
                                                            EntityPath get_entity_path(Entity* parent) const override;
                                                            std::string get_segment_path() const override;
                                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                            void set_value(const std::string & value_path, std::string value) override;
                                                            std::map<std::string, Entity*> & get_children() override;
                                                            Value address; //type: string
                                                            Value prefix_length; //type: uint8
                                                            Value prefix; //type: string
                                                            Value prefix_length_xr; //type: uint8
                                                            Value route_version; //type: uint32
                                                            Value protocol_id; //type: uint32
                                                            Value protocol_name; //type: string
                                                            Value instance; //type: string
                                                            Value client_id; //type: uint32
                                                            Value route_type; //type: uint16
                                                            Value priority; //type: uint8
                                                            Value svd_type; //type: uint8
                                                            Value flags; //type: uint32
                                                            Value extended_flags; //type: uint64
                                                            Value tag; //type: uint32
                                                            Value distance; //type: uint32
                                                            Value diversion_distance; //type: uint32
                                                            Value metric; //type: uint32
                                                            Value paths_count; //type: uint32
                                                            Value attribute_identity; //type: uint32
                                                            Value traffic_index; //type: uint8
                                                            Value route_precedence; //type: uint8
                                                            Value qos_group; //type: uint8
                                                            Value flow_tag; //type: uint8
                                                            Value fwd_class; //type: uint8
                                                            Value pic_count; //type: uint8
                                                            Value active; //type: boolean
                                                            Value diversion; //type: boolean
                                                            Value diversion_proto_name; //type: string
                                                            Value route_age; //type: uint32
                                                            Value route_label; //type: uint32
                                                            Value version; //type: uint32
                                                            Value tbl_version; //type: uint64
                                                            Value route_modify_time; //type: uint64


                                                        class RoutePath : public Entity
                                                        {
                                                            public:
                                                                RoutePath();
                                                                ~RoutePath();

                                                                bool has_data() const override;
                                                                bool has_operation() const override;
                                                                EntityPath get_entity_path(Entity* parent) const override;
                                                                std::string get_segment_path() const override;
                                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                void set_value(const std::string & value_path, std::string value) override;
                                                                std::map<std::string, Entity*> & get_children() override;


                                                            class Ipv6RibEdmPath : public Entity
                                                            {
                                                                public:
                                                                    Ipv6RibEdmPath();
                                                                    ~Ipv6RibEdmPath();

                                                                    bool has_data() const override;
                                                                    bool has_operation() const override;
                                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                                    std::string get_segment_path() const override;
                                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                                    void set_value(const std::string & value_path, std::string value) override;
                                                                    std::map<std::string, Entity*> & get_children() override;
                                                                    Value address; //type: string
                                                                    Value information_source; //type: string
                                                                    Value v6_nexthop; //type: string
                                                                    Value interface_name; //type: string
                                                                    Value metric; //type: uint32
                                                                    Value load_metric; //type: uint32
                                                                    Value flags64; //type: uint64
                                                                    Value flags; //type: uint16
                                                                    Value private_flags; //type: uint16
                                                                    Value looped; //type: boolean
                                                                    Value next_hop_table_id; //type: uint32
                                                                    Value next_hop_vrf_name; //type: string
                                                                    Value next_hop_table_name; //type: string
                                                                    Value next_hop_afi; //type: uint32
                                                                    Value next_hop_safi; //type: uint32
                                                                    Value route_label; //type: uint32
                                                                    Value tunnel_id; //type: uint32
                                                                    Value pathid; //type: uint32
                                                                    Value backup_pathid; //type: uint32
                                                                    Value ref_cnt_of_backup; //type: uint32
                                                                    Value number_of_extended_communities; //type: uint32
                                                                    Value mvpn_present; //type: boolean
                                                                    Value path_rt_present; //type: boolean
                                                                    Value vrf_import_rt_present; //type: boolean
                                                                    Value source_asrt_present; //type: boolean
                                                                    Value source_rd_present; //type: boolean
                                                                    Value segmented_nexthop_present; //type: boolean
                                                                    Value next_hop_id; //type: uint32
                                                                    Value next_hop_id_refcount; //type: uint32
                                                                    Value ospf_area_id; //type: string
                                                                    Value has_labelstk; //type: boolean
                                                                    Value num_labels; //type: uint8
                                                                    Value binding_label; //type: uint32
                                                                    Value nhid_feid; //type: uint64
                                                                    Value mpls_feid; //type: uint64
                                                                    ValueList remote_backup_addr; //type: list of  string
                                                                    ValueList labelstk; //type: list of  uint32




                                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath


                                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath


                                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute::RoutePath> route_path;


                                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute


                                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes::ProtocolRoute> > protocol_route;


                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes


                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::Information> information;
                                                    std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As::ProtocolRoutes> protocol_routes;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As


                                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis::As> > as;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis


                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Bgp> bgp;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Connected> connected;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Eigrp> eigrp;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Isis> isis;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Local> local;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Mobile> mobile;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Ospf> ospf;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Rpl> rpl;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Static_> static_;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::Subscriber> subscriber;
                                            std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol::TeClient> te_client;


                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol


                                    class Routes : public Entity
                                    {
                                        public:
                                            Routes();
                                            ~Routes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class Route : public Entity
                                        {
                                            public:
                                                Route();
                                                ~Route();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value prefix_length; //type: uint8
                                                Value next_hop_address; //type: string
                                                Value interface_name; //type: string
                                                Value prefix; //type: string
                                                Value prefix_length_xr; //type: uint8
                                                Value route_version; //type: uint32
                                                Value protocol_id; //type: uint32
                                                Value protocol_name; //type: string
                                                Value instance; //type: string
                                                Value client_id; //type: uint32
                                                Value route_type; //type: uint16
                                                Value priority; //type: uint8
                                                Value svd_type; //type: uint8
                                                Value flags; //type: uint32
                                                Value extended_flags; //type: uint64
                                                Value tag; //type: uint32
                                                Value distance; //type: uint32
                                                Value diversion_distance; //type: uint32
                                                Value metric; //type: uint32
                                                Value paths_count; //type: uint32
                                                Value attribute_identity; //type: uint32
                                                Value traffic_index; //type: uint8
                                                Value route_precedence; //type: uint8
                                                Value qos_group; //type: uint8
                                                Value flow_tag; //type: uint8
                                                Value fwd_class; //type: uint8
                                                Value pic_count; //type: uint8
                                                Value active; //type: boolean
                                                Value diversion; //type: boolean
                                                Value diversion_proto_name; //type: string
                                                Value route_age; //type: uint32
                                                Value route_label; //type: uint32
                                                Value version; //type: uint32
                                                Value tbl_version; //type: uint64
                                                Value route_modify_time; //type: uint64


                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Ipv6RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv6RibEdmPath();
                                                        ~Ipv6RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value address; //type: string
                                                        Value information_source; //type: string
                                                        Value v6_nexthop; //type: string
                                                        Value interface_name; //type: string
                                                        Value metric; //type: uint32
                                                        Value load_metric; //type: uint32
                                                        Value flags64; //type: uint64
                                                        Value flags; //type: uint16
                                                        Value private_flags; //type: uint16
                                                        Value looped; //type: boolean
                                                        Value next_hop_table_id; //type: uint32
                                                        Value next_hop_vrf_name; //type: string
                                                        Value next_hop_table_name; //type: string
                                                        Value next_hop_afi; //type: uint32
                                                        Value next_hop_safi; //type: uint32
                                                        Value route_label; //type: uint32
                                                        Value tunnel_id; //type: uint32
                                                        Value pathid; //type: uint32
                                                        Value backup_pathid; //type: uint32
                                                        Value ref_cnt_of_backup; //type: uint32
                                                        Value number_of_extended_communities; //type: uint32
                                                        Value mvpn_present; //type: boolean
                                                        Value path_rt_present; //type: boolean
                                                        Value vrf_import_rt_present; //type: boolean
                                                        Value source_asrt_present; //type: boolean
                                                        Value source_rd_present; //type: boolean
                                                        Value segmented_nexthop_present; //type: boolean
                                                        Value next_hop_id; //type: uint32
                                                        Value next_hop_id_refcount; //type: uint32
                                                        Value ospf_area_id; //type: string
                                                        Value has_labelstk; //type: boolean
                                                        Value num_labels; //type: uint8
                                                        Value binding_label; //type: uint32
                                                        Value nhid_feid; //type: uint64
                                                        Value mpls_feid; //type: uint64
                                                        ValueList remote_backup_addr; //type: list of  string
                                                        ValueList labelstk; //type: list of  uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route::RoutePath> route_path;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes::Route> > route;


                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes


                                    class QRoutes : public Entity
                                    {
                                        public:
                                            QRoutes();
                                            ~QRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class QRoute : public Entity
                                        {
                                            public:
                                                QRoute();
                                                ~QRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value prefix_length; //type: uint8
                                                Value prefix; //type: string
                                                Value prefix_length_xr; //type: uint8
                                                Value route_version; //type: uint32
                                                Value protocol_id; //type: uint32
                                                Value protocol_name; //type: string
                                                Value instance; //type: string
                                                Value client_id; //type: uint32
                                                Value route_type; //type: uint16
                                                Value priority; //type: uint8
                                                Value svd_type; //type: uint8
                                                Value flags; //type: uint32
                                                Value extended_flags; //type: uint64
                                                Value tag; //type: uint32
                                                Value distance; //type: uint32
                                                Value diversion_distance; //type: uint32
                                                Value metric; //type: uint32
                                                Value paths_count; //type: uint32
                                                Value attribute_identity; //type: uint32
                                                Value traffic_index; //type: uint8
                                                Value route_precedence; //type: uint8
                                                Value qos_group; //type: uint8
                                                Value flow_tag; //type: uint8
                                                Value fwd_class; //type: uint8
                                                Value pic_count; //type: uint8
                                                Value active; //type: boolean
                                                Value diversion; //type: boolean
                                                Value diversion_proto_name; //type: string
                                                Value route_age; //type: uint32
                                                Value route_label; //type: uint32
                                                Value version; //type: uint32
                                                Value tbl_version; //type: uint64
                                                Value route_modify_time; //type: uint64


                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Ipv6RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv6RibEdmPath();
                                                        ~Ipv6RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value address; //type: string
                                                        Value information_source; //type: string
                                                        Value v6_nexthop; //type: string
                                                        Value interface_name; //type: string
                                                        Value metric; //type: uint32
                                                        Value load_metric; //type: uint32
                                                        Value flags64; //type: uint64
                                                        Value flags; //type: uint16
                                                        Value private_flags; //type: uint16
                                                        Value looped; //type: boolean
                                                        Value next_hop_table_id; //type: uint32
                                                        Value next_hop_vrf_name; //type: string
                                                        Value next_hop_table_name; //type: string
                                                        Value next_hop_afi; //type: uint32
                                                        Value next_hop_safi; //type: uint32
                                                        Value route_label; //type: uint32
                                                        Value tunnel_id; //type: uint32
                                                        Value pathid; //type: uint32
                                                        Value backup_pathid; //type: uint32
                                                        Value ref_cnt_of_backup; //type: uint32
                                                        Value number_of_extended_communities; //type: uint32
                                                        Value mvpn_present; //type: boolean
                                                        Value path_rt_present; //type: boolean
                                                        Value vrf_import_rt_present; //type: boolean
                                                        Value source_asrt_present; //type: boolean
                                                        Value source_rd_present; //type: boolean
                                                        Value segmented_nexthop_present; //type: boolean
                                                        Value next_hop_id; //type: uint32
                                                        Value next_hop_id_refcount; //type: uint32
                                                        Value ospf_area_id; //type: string
                                                        Value has_labelstk; //type: boolean
                                                        Value num_labels; //type: uint8
                                                        Value binding_label; //type: uint32
                                                        Value nhid_feid; //type: uint64
                                                        Value mpls_feid; //type: uint64
                                                        ValueList remote_backup_addr; //type: list of  string
                                                        ValueList labelstk; //type: list of  uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute::RoutePath> route_path;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes::QRoute> > q_route;


                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes


                                    class BackupRoutes : public Entity
                                    {
                                        public:
                                            BackupRoutes();
                                            ~BackupRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class BackupRoute : public Entity
                                        {
                                            public:
                                                BackupRoute();
                                                ~BackupRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value address; //type: string
                                                Value prefix_length; //type: uint8
                                                Value protoid; //type: int32
                                                Value prefix; //type: string
                                                Value prefix_length_xr; //type: uint8
                                                Value route_version; //type: uint32
                                                Value protocol_id; //type: uint32
                                                Value protocol_name; //type: string
                                                Value instance; //type: string
                                                Value client_id; //type: uint32
                                                Value route_type; //type: uint16
                                                Value priority; //type: uint8
                                                Value svd_type; //type: uint8
                                                Value flags; //type: uint32
                                                Value extended_flags; //type: uint64
                                                Value tag; //type: uint32
                                                Value distance; //type: uint32
                                                Value diversion_distance; //type: uint32
                                                Value metric; //type: uint32
                                                Value paths_count; //type: uint32
                                                Value attribute_identity; //type: uint32
                                                Value traffic_index; //type: uint8
                                                Value route_precedence; //type: uint8
                                                Value qos_group; //type: uint8
                                                Value flow_tag; //type: uint8
                                                Value fwd_class; //type: uint8
                                                Value pic_count; //type: uint8
                                                Value active; //type: boolean
                                                Value diversion; //type: boolean
                                                Value diversion_proto_name; //type: string
                                                Value route_age; //type: uint32
                                                Value route_label; //type: uint32
                                                Value version; //type: uint32
                                                Value tbl_version; //type: uint64
                                                Value route_modify_time; //type: uint64


                                            class RoutePath : public Entity
                                            {
                                                public:
                                                    RoutePath();
                                                    ~RoutePath();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;


                                                class Ipv6RibEdmPath : public Entity
                                                {
                                                    public:
                                                        Ipv6RibEdmPath();
                                                        ~Ipv6RibEdmPath();

                                                        bool has_data() const override;
                                                        bool has_operation() const override;
                                                        EntityPath get_entity_path(Entity* parent) const override;
                                                        std::string get_segment_path() const override;
                                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                        void set_value(const std::string & value_path, std::string value) override;
                                                        std::map<std::string, Entity*> & get_children() override;
                                                        Value address; //type: string
                                                        Value information_source; //type: string
                                                        Value v6_nexthop; //type: string
                                                        Value interface_name; //type: string
                                                        Value metric; //type: uint32
                                                        Value load_metric; //type: uint32
                                                        Value flags64; //type: uint64
                                                        Value flags; //type: uint16
                                                        Value private_flags; //type: uint16
                                                        Value looped; //type: boolean
                                                        Value next_hop_table_id; //type: uint32
                                                        Value next_hop_vrf_name; //type: string
                                                        Value next_hop_table_name; //type: string
                                                        Value next_hop_afi; //type: uint32
                                                        Value next_hop_safi; //type: uint32
                                                        Value route_label; //type: uint32
                                                        Value tunnel_id; //type: uint32
                                                        Value pathid; //type: uint32
                                                        Value backup_pathid; //type: uint32
                                                        Value ref_cnt_of_backup; //type: uint32
                                                        Value number_of_extended_communities; //type: uint32
                                                        Value mvpn_present; //type: boolean
                                                        Value path_rt_present; //type: boolean
                                                        Value vrf_import_rt_present; //type: boolean
                                                        Value source_asrt_present; //type: boolean
                                                        Value source_rd_present; //type: boolean
                                                        Value segmented_nexthop_present; //type: boolean
                                                        Value next_hop_id; //type: uint32
                                                        Value next_hop_id_refcount; //type: uint32
                                                        Value ospf_area_id; //type: string
                                                        Value has_labelstk; //type: boolean
                                                        Value num_labels; //type: uint8
                                                        Value binding_label; //type: uint32
                                                        Value nhid_feid; //type: uint64
                                                        Value mpls_feid; //type: uint64
                                                        ValueList remote_backup_addr; //type: list of  string
                                                        ValueList labelstk; //type: list of  uint32




                                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath


                                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath::Ipv6RibEdmPath> > ipv6_rib_edm_path;


                                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath


                                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute::RoutePath> route_path;


                                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes::BackupRoute> > backup_route;


                                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes


                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Adverts> adverts;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::BackupRoutes> backup_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DeletedRoutes> deleted_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::DestinationKw> destination_kw;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Protocol> protocol;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::QRoutes> q_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName::Routes> routes;


                                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames::IpRibRouteTableName> > ip_rib_route_table_name;


                            }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames


                                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf::IpRibRouteTableNames> ip_rib_route_table_names;


                        }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs::Saf> > saf;


                    }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs


                        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af::Safs> safs;


                }; // Ipv6RibStdby::Vrfs::Vrf::Afs::Af


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs::Af> > af;


            }; // Ipv6RibStdby::Vrfs::Vrf::Afs


                std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf::Afs> afs;


        }; // Ipv6RibStdby::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs::Vrf> > vrf;


    }; // Ipv6RibStdby::Vrfs


        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::RibTableIds> rib_table_ids;
        std::unique_ptr<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby::Vrfs> vrfs;


}; // Ipv6RibStdby



}
}

#endif /* _CISCO_IOS_XR_IP_RIB_IPV6_OPER_ */

