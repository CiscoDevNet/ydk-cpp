#ifndef _CISCO_IOS_XR_PBR_VSERVICE_EA_OPER_
#define _CISCO_IOS_XR_PBR_VSERVICE_EA_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pbr_vservice_ea_oper {

class ServiceFunctionChaining : public Entity
{
    public:
        ServiceFunctionChaining();
        ~ServiceFunctionChaining();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node_name; //type: string


            class Process : public Entity
            {
                public:
                    Process();
                    ~Process();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ServiceFunctionPath : public Entity
                {
                    public:
                        ServiceFunctionPath();
                        ~ServiceFunctionPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PathIds : public Entity
                    {
                        public:
                            PathIds();
                            ~PathIds();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class PathId : public Entity
                        {
                            public:
                                PathId();
                                ~PathId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value id; //type: uint32


                            class ServiceIndexes : public Entity
                            {
                                public:
                                    ServiceIndexes();
                                    ~ServiceIndexes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class ServiceIndex : public Entity
                                {
                                    public:
                                        ServiceIndex();
                                        ~ServiceIndex();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value index_; //type: uint32


                                    class Data : public Entity
                                    {
                                        public:
                                            Data();
                                            ~Data();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value type; //type: VsNshStatsEnum


                                        class Sfp : public Entity
                                        {
                                            public:
                                                Sfp();
                                                ~Sfp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class SpiSi : public Entity
                                            {
                                                public:
                                                    SpiSi();
                                                    ~SpiSi();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value processed_pkts; //type: uint64
                                                    Value processed_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi


                                            class Term : public Entity
                                            {
                                                public:
                                                    Term();
                                                    ~Term();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value terminated_pkts; //type: uint64
                                                    Value terminated_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term


                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::SpiSi> spi_si;
                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp::Term> term;


                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp


                                        class SpiSi : public Entity
                                        {
                                            public:
                                                SpiSi();
                                                ~SpiSi();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value processed_pkts; //type: uint64
                                                Value processed_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi


                                        class Term : public Entity
                                        {
                                            public:
                                                Term();
                                                ~Term();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value terminated_pkts; //type: uint64
                                                Value terminated_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term


                                        class Sf : public Entity
                                        {
                                            public:
                                                Sf();
                                                ~Sf();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value processed_pkts; //type: uint64
                                                Value processed_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf


                                        class Sff : public Entity
                                        {
                                            public:
                                                Sff();
                                                ~Sff();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value processed_pkts; //type: uint64
                                                Value processed_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff


                                        class SffLocal : public Entity
                                        {
                                            public:
                                                SffLocal();
                                                ~SffLocal();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value malformed_err_pkts; //type: uint64
                                                Value lookup_err_pkts; //type: uint64
                                                Value malformed_err_bytes; //type: uint64
                                                Value lookup_err_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal


                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sf> sf;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sff> sff;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SffLocal> sff_local;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Sfp> sfp;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::SpiSi> spi_si;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data::Term> term;
                                            class VsNshStatsEnum;


                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data


                                    class SiArr : public Entity
                                    {
                                        public:
                                            SiArr();
                                            ~SiArr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value si; //type: uint8


                                        class Data : public Entity
                                        {
                                            public:
                                                Data();
                                                ~Data();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value type; //type: VsNshStatsEnum


                                            class SpiSi : public Entity
                                            {
                                                public:
                                                    SpiSi();
                                                    ~SpiSi();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value processed_pkts; //type: uint64
                                                    Value processed_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi


                                            class Term : public Entity
                                            {
                                                public:
                                                    Term();
                                                    ~Term();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value terminated_pkts; //type: uint64
                                                    Value terminated_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term


                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::SpiSi> spi_si;
                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data::Term> term;
                                                class VsNshStatsEnum;


                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data


                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr::Data> data;


                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr


                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::Data> data;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex::SiArr> > si_arr;


                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes::ServiceIndex> > service_index;


                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes


                            class Stats : public Entity
                            {
                                public:
                                    Stats();
                                    ~Stats();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Detail : public Entity
                                {
                                    public:
                                        Detail();
                                        ~Detail();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Data : public Entity
                                    {
                                        public:
                                            Data();
                                            ~Data();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value type; //type: VsNshStatsEnum


                                        class Sfp : public Entity
                                        {
                                            public:
                                                Sfp();
                                                ~Sfp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class SpiSi : public Entity
                                            {
                                                public:
                                                    SpiSi();
                                                    ~SpiSi();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value processed_pkts; //type: uint64
                                                    Value processed_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi


                                            class Term : public Entity
                                            {
                                                public:
                                                    Term();
                                                    ~Term();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value terminated_pkts; //type: uint64
                                                    Value terminated_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term


                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::SpiSi> spi_si;
                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp::Term> term;


                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp


                                        class SpiSi : public Entity
                                        {
                                            public:
                                                SpiSi();
                                                ~SpiSi();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value processed_pkts; //type: uint64
                                                Value processed_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi


                                        class Term : public Entity
                                        {
                                            public:
                                                Term();
                                                ~Term();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value terminated_pkts; //type: uint64
                                                Value terminated_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term


                                        class Sf : public Entity
                                        {
                                            public:
                                                Sf();
                                                ~Sf();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value processed_pkts; //type: uint64
                                                Value processed_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf


                                        class Sff : public Entity
                                        {
                                            public:
                                                Sff();
                                                ~Sff();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value processed_pkts; //type: uint64
                                                Value processed_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff


                                        class SffLocal : public Entity
                                        {
                                            public:
                                                SffLocal();
                                                ~SffLocal();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value malformed_err_pkts; //type: uint64
                                                Value lookup_err_pkts; //type: uint64
                                                Value malformed_err_bytes; //type: uint64
                                                Value lookup_err_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal


                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sf> sf;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sff> sff;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SffLocal> sff_local;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Sfp> sfp;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::SpiSi> spi_si;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data::Term> term;
                                            class VsNshStatsEnum;


                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data


                                    class SiArr : public Entity
                                    {
                                        public:
                                            SiArr();
                                            ~SiArr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value si; //type: uint8


                                        class Data : public Entity
                                        {
                                            public:
                                                Data();
                                                ~Data();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value type; //type: VsNshStatsEnum


                                            class SpiSi : public Entity
                                            {
                                                public:
                                                    SpiSi();
                                                    ~SpiSi();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value processed_pkts; //type: uint64
                                                    Value processed_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi


                                            class Term : public Entity
                                            {
                                                public:
                                                    Term();
                                                    ~Term();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value terminated_pkts; //type: uint64
                                                    Value terminated_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term


                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::SpiSi> spi_si;
                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data::Term> term;
                                                class VsNshStatsEnum;


                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data


                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr::Data> data;


                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr


                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::Data> data;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail::SiArr> > si_arr;


                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail


                                class Summarized : public Entity
                                {
                                    public:
                                        Summarized();
                                        ~Summarized();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class Data : public Entity
                                    {
                                        public:
                                            Data();
                                            ~Data();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value type; //type: VsNshStatsEnum


                                        class Sfp : public Entity
                                        {
                                            public:
                                                Sfp();
                                                ~Sfp();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                            class SpiSi : public Entity
                                            {
                                                public:
                                                    SpiSi();
                                                    ~SpiSi();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value processed_pkts; //type: uint64
                                                    Value processed_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi


                                            class Term : public Entity
                                            {
                                                public:
                                                    Term();
                                                    ~Term();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value terminated_pkts; //type: uint64
                                                    Value terminated_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term


                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::SpiSi> spi_si;
                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp::Term> term;


                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp


                                        class SpiSi : public Entity
                                        {
                                            public:
                                                SpiSi();
                                                ~SpiSi();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value processed_pkts; //type: uint64
                                                Value processed_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi


                                        class Term : public Entity
                                        {
                                            public:
                                                Term();
                                                ~Term();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value terminated_pkts; //type: uint64
                                                Value terminated_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term


                                        class Sf : public Entity
                                        {
                                            public:
                                                Sf();
                                                ~Sf();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value processed_pkts; //type: uint64
                                                Value processed_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf


                                        class Sff : public Entity
                                        {
                                            public:
                                                Sff();
                                                ~Sff();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value processed_pkts; //type: uint64
                                                Value processed_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff


                                        class SffLocal : public Entity
                                        {
                                            public:
                                                SffLocal();
                                                ~SffLocal();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value malformed_err_pkts; //type: uint64
                                                Value lookup_err_pkts; //type: uint64
                                                Value malformed_err_bytes; //type: uint64
                                                Value lookup_err_bytes; //type: uint64




                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal


                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sf> sf;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sff> sff;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SffLocal> sff_local;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Sfp> sfp;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::SpiSi> spi_si;
                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data::Term> term;
                                            class VsNshStatsEnum;


                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data


                                    class SiArr : public Entity
                                    {
                                        public:
                                            SiArr();
                                            ~SiArr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value si; //type: uint8


                                        class Data : public Entity
                                        {
                                            public:
                                                Data();
                                                ~Data();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value type; //type: VsNshStatsEnum


                                            class SpiSi : public Entity
                                            {
                                                public:
                                                    SpiSi();
                                                    ~SpiSi();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value processed_pkts; //type: uint64
                                                    Value processed_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi


                                            class Term : public Entity
                                            {
                                                public:
                                                    Term();
                                                    ~Term();

                                                    bool has_data() const override;
                                                    bool has_operation() const override;
                                                    EntityPath get_entity_path(Entity* parent) const override;
                                                    std::string get_segment_path() const override;
                                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                    void set_value(const std::string & value_path, std::string value) override;
                                                    std::map<std::string, Entity*> & get_children() override;
                                                    Value terminated_pkts; //type: uint64
                                                    Value terminated_bytes; //type: uint64




                                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term


                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::SpiSi> spi_si;
                                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data::Term> term;
                                                class VsNshStatsEnum;


                                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data


                                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr::Data> data;


                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr


                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::Data> data;
                                        std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized::SiArr> > si_arr;


                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Detail> detail;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats::Summarized> summarized;


                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats


                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::ServiceIndexes> service_indexes;
                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId::Stats> stats;


                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId


                            std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds::PathId> > path_id;


                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds


                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath::PathIds> path_ids;


                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath


                class ServiceFunction : public Entity
                {
                    public:
                        ServiceFunction();
                        ~ServiceFunction();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SfNames : public Entity
                    {
                        public:
                            SfNames();
                            ~SfNames();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class SfName : public Entity
                        {
                            public:
                                SfName();
                                ~SfName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value name; //type: string


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value type; //type: VsNshStatsEnum


                                class Sfp : public Entity
                                {
                                    public:
                                        Sfp();
                                        ~Sfp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class SpiSi : public Entity
                                    {
                                        public:
                                            SpiSi();
                                            ~SpiSi();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value processed_pkts; //type: uint64
                                            Value processed_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi


                                    class Term : public Entity
                                    {
                                        public:
                                            Term();
                                            ~Term();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value terminated_pkts; //type: uint64
                                            Value terminated_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term


                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::SpiSi> spi_si;
                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp::Term> term;


                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp


                                class SpiSi : public Entity
                                {
                                    public:
                                        SpiSi();
                                        ~SpiSi();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value processed_pkts; //type: uint64
                                        Value processed_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi


                                class Term : public Entity
                                {
                                    public:
                                        Term();
                                        ~Term();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value terminated_pkts; //type: uint64
                                        Value terminated_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term


                                class Sf : public Entity
                                {
                                    public:
                                        Sf();
                                        ~Sf();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value processed_pkts; //type: uint64
                                        Value processed_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf


                                class Sff : public Entity
                                {
                                    public:
                                        Sff();
                                        ~Sff();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value processed_pkts; //type: uint64
                                        Value processed_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff


                                class SffLocal : public Entity
                                {
                                    public:
                                        SffLocal();
                                        ~SffLocal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value malformed_err_pkts; //type: uint64
                                        Value lookup_err_pkts; //type: uint64
                                        Value malformed_err_bytes; //type: uint64
                                        Value lookup_err_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sf> sf;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sff> sff;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SffLocal> sff_local;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Sfp> sfp;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::SpiSi> spi_si;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data::Term> term;
                                    class VsNshStatsEnum;


                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data


                            class SiArr : public Entity
                            {
                                public:
                                    SiArr();
                                    ~SiArr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value si; //type: uint8


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value type; //type: VsNshStatsEnum


                                    class SpiSi : public Entity
                                    {
                                        public:
                                            SpiSi();
                                            ~SpiSi();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value processed_pkts; //type: uint64
                                            Value processed_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi


                                    class Term : public Entity
                                    {
                                        public:
                                            Term();
                                            ~Term();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value terminated_pkts; //type: uint64
                                            Value terminated_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term


                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::SpiSi> spi_si;
                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data::Term> term;
                                        class VsNshStatsEnum;


                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr::Data> data;


                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr


                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::Data> data;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName::SiArr> > si_arr;


                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames::SfName> > sf_name;


                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames


                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction::SfNames> sf_names;


                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction


                class ServiceFunctionForwarder : public Entity
                {
                    public:
                        ServiceFunctionForwarder();
                        ~ServiceFunctionForwarder();

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


                        class Error : public Entity
                        {
                            public:
                                Error();
                                ~Error();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value type; //type: VsNshStatsEnum


                                class Sfp : public Entity
                                {
                                    public:
                                        Sfp();
                                        ~Sfp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class SpiSi : public Entity
                                    {
                                        public:
                                            SpiSi();
                                            ~SpiSi();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value processed_pkts; //type: uint64
                                            Value processed_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi


                                    class Term : public Entity
                                    {
                                        public:
                                            Term();
                                            ~Term();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value terminated_pkts; //type: uint64
                                            Value terminated_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term


                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::SpiSi> spi_si;
                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp::Term> term;


                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp


                                class SpiSi : public Entity
                                {
                                    public:
                                        SpiSi();
                                        ~SpiSi();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value processed_pkts; //type: uint64
                                        Value processed_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi


                                class Term : public Entity
                                {
                                    public:
                                        Term();
                                        ~Term();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value terminated_pkts; //type: uint64
                                        Value terminated_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term


                                class Sf : public Entity
                                {
                                    public:
                                        Sf();
                                        ~Sf();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value processed_pkts; //type: uint64
                                        Value processed_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf


                                class Sff : public Entity
                                {
                                    public:
                                        Sff();
                                        ~Sff();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value processed_pkts; //type: uint64
                                        Value processed_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff


                                class SffLocal : public Entity
                                {
                                    public:
                                        SffLocal();
                                        ~SffLocal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value malformed_err_pkts; //type: uint64
                                        Value lookup_err_pkts; //type: uint64
                                        Value malformed_err_bytes; //type: uint64
                                        Value lookup_err_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sf> sf;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sff> sff;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SffLocal> sff_local;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Sfp> sfp;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::SpiSi> spi_si;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data::Term> term;
                                    class VsNshStatsEnum;


                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data


                            class SiArr : public Entity
                            {
                                public:
                                    SiArr();
                                    ~SiArr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value si; //type: uint8


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value type; //type: VsNshStatsEnum


                                    class SpiSi : public Entity
                                    {
                                        public:
                                            SpiSi();
                                            ~SpiSi();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value processed_pkts; //type: uint64
                                            Value processed_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi


                                    class Term : public Entity
                                    {
                                        public:
                                            Term();
                                            ~Term();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value terminated_pkts; //type: uint64
                                            Value terminated_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term


                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::SpiSi> spi_si;
                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data::Term> term;
                                        class VsNshStatsEnum;


                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr::Data> data;


                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr


                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::Data> data;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error::SiArr> > si_arr;


                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error


                            std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local::Error> error;


                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local


                    class SffNames : public Entity
                    {
                        public:
                            SffNames();
                            ~SffNames();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class SffName : public Entity
                        {
                            public:
                                SffName();
                                ~SffName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value name; //type: string


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value type; //type: VsNshStatsEnum


                                class Sfp : public Entity
                                {
                                    public:
                                        Sfp();
                                        ~Sfp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class SpiSi : public Entity
                                    {
                                        public:
                                            SpiSi();
                                            ~SpiSi();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value processed_pkts; //type: uint64
                                            Value processed_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi


                                    class Term : public Entity
                                    {
                                        public:
                                            Term();
                                            ~Term();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value terminated_pkts; //type: uint64
                                            Value terminated_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term


                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::SpiSi> spi_si;
                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp::Term> term;


                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp


                                class SpiSi : public Entity
                                {
                                    public:
                                        SpiSi();
                                        ~SpiSi();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value processed_pkts; //type: uint64
                                        Value processed_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi


                                class Term : public Entity
                                {
                                    public:
                                        Term();
                                        ~Term();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value terminated_pkts; //type: uint64
                                        Value terminated_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term


                                class Sf : public Entity
                                {
                                    public:
                                        Sf();
                                        ~Sf();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value processed_pkts; //type: uint64
                                        Value processed_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf


                                class Sff : public Entity
                                {
                                    public:
                                        Sff();
                                        ~Sff();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value processed_pkts; //type: uint64
                                        Value processed_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff


                                class SffLocal : public Entity
                                {
                                    public:
                                        SffLocal();
                                        ~SffLocal();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value malformed_err_pkts; //type: uint64
                                        Value lookup_err_pkts; //type: uint64
                                        Value malformed_err_bytes; //type: uint64
                                        Value lookup_err_bytes; //type: uint64




                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sf> sf;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sff> sff;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SffLocal> sff_local;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Sfp> sfp;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::SpiSi> spi_si;
                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data::Term> term;
                                    class VsNshStatsEnum;


                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data


                            class SiArr : public Entity
                            {
                                public:
                                    SiArr();
                                    ~SiArr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value si; //type: uint8


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value type; //type: VsNshStatsEnum


                                    class SpiSi : public Entity
                                    {
                                        public:
                                            SpiSi();
                                            ~SpiSi();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value processed_pkts; //type: uint64
                                            Value processed_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi


                                    class Term : public Entity
                                    {
                                        public:
                                            Term();
                                            ~Term();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value terminated_pkts; //type: uint64
                                            Value terminated_bytes; //type: uint64




                                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term


                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::SpiSi> spi_si;
                                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data::Term> term;
                                        class VsNshStatsEnum;


                                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data


                                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr::Data> data;


                            }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr


                                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::Data> data;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName::SiArr> > si_arr;


                        }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames::SffName> > sff_name;


                    }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames


                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::Local> local;
                        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder::SffNames> sff_names;


                }; // ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder


                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunction> service_function;
                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionForwarder> service_function_forwarder;
                    std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process::ServiceFunctionPath> service_function_path;


            }; // ServiceFunctionChaining::Nodes::Node::Process


                std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node::Process> process;


        }; // ServiceFunctionChaining::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes::Node> > node;


    }; // ServiceFunctionChaining::Nodes


        std::unique_ptr<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining::Nodes> nodes;


}; // ServiceFunctionChaining


class VsNshStatsEnum : public Enum
{
    public:
        static const Enum::Value vs_nsh_stats_spi_si;
        static const Enum::Value vs_nsh_stats_ter_min_ate;
        static const Enum::Value vs_nsh_stats_sf;
        static const Enum::Value vs_nsh_stats_sff;
        static const Enum::Value vs_nsh_stats_sff_local;
        static const Enum::Value vs_nsh_stats_sfp;
        static const Enum::Value vs_nsh_stats_sfp_detail;
        static const Enum::Value vs_nsh_stats_max;

};


}
}

#endif /* _CISCO_IOS_XR_PBR_VSERVICE_EA_OPER_ */

